#ifndef MYTIME_H_
#define MYTIME_H_
#include <iostream>

class Time{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m = 0);
        void addMin(int m);
        void addHr(int h);
        void Reset(int h = 0, int m = 0);
        //friend functions
        friend Time operator+(const Time & t1, const Time & t2);
        friend Time operator-(const Time & t1, const Time & t2);
        friend Time operator*(const Time & t, double m);
        friend Time operator*(double m, const Time & t){
            return t * m;
        }
        friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif