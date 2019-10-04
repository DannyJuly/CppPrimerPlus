#include "mytime.h"


Time::Time(){
    hours = 0;
    minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::addMin(int m){
    hours += (m+minutes) / 60;
    minutes = (m + minutes)%60;
}

void Time::addHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = minutes = 0;
}

Time operator+(const Time & t1, const Time & t2){
    Time t;
    t.hours = t1.hours + t2.hours + (t1.minutes + t2.minutes) / 60;
    t.minutes = (t1.minutes + t2.minutes) % 60;
    return t;
}

Time operator-(const Time & t1, const Time & t2){
    Time t;
    int tot1, tot2;
    tot1 = t1.minutes + 60 * t1.hours;
    tot2 = t2.minutes + 60 * t2.hours;
    if(tot1 - tot2 >= 0){
        t.minutes = (tot1 - tot2) % 60;
        t.hours = (tot1- tot2) / 60;
        return t;
    }
    else{
        std::cout << "The time is negative.";
    }
}


Time operator*(const Time & t, double m)
{
    Time result;
    long total = t.hours * m * 60 + t.minutes * m;
    result.hours = total / 60;
    result.minutes = total % 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t){
    os << t.hours << " hours, " << t.minutes << " minutes.";
    return os;
}