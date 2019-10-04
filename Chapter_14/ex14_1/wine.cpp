#include <iostream>
#include "wine.h"

//constructor
Wine::Wine() : label("none"), years(0), data(ArrayInt(0),ArrayInt(0))
{
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
 : label(l), years(y), data(ArrayInt(yr,y), ArrayInt(bot, y))
{
}

Wine::Wine(const char * l, int y)
 : label(l), years(y), data(ArrayInt(y), ArrayInt(y))
 {
 }

//no copy constructor since no dynamic member 

void Wine::GetBottles(){
    int y, b;
    std::cout << "Enter " << label << " data for " << years << " year(s)" <<std::endl;
    for(int i = 0; i < years; i++){
        std::cout << "Enter year:";
        std::cin >> y;
        data.first()[i] = y;
        std::cout << "Enter bottles for that years: ";
        std::cin >> b;
        data.second()[i] = b;
    } 
}

int Wine::sum(){
    return data.second().sum();
}

void Wine::Show() {
    std::cout << "Wine: " << label << std::endl;
    std::cout << "Year  " << "  Bottles" << std::endl;
    for(int i = 0; i < years; ++i){
        std::cout << data.second()[i] <<"   ";
        std::cout << data.first()[i] << std::endl;
    }
}

