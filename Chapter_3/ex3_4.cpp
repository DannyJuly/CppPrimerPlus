#include <iostream>
#include <cmath>

using namespace std;
const int sec_per_min  = 60;
const int min_per_hour  = 60;
const int hour_per_day  = 12;
int main(){
    cout<<"enter the number of seconds: ";
    long long seconds;
    cin>>seconds;
    //get seconds

    int sec = seconds % sec_per_min;
    int total_min = seconds / sec_per_min;

    //get minutes
    int min = total_min % min_per_hour;
    int total_hour = total_min / min_per_hour;

    //get hours;
    int hour = total_hour % hour_per_day;
    int day = total_hour / hour_per_day;


    std::cout << seconds << " seconds = ";
    std::cout << day << " days, ";
    std::cout << hour << " hours, ";
    std::cout << min << " minutes, ";
    std::cout << sec << " seconds" << std::endl;
    return 0;

}