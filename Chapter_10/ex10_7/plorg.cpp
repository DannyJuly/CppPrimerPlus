#include "plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg()
{
    strcpy(name_, "Plorg");
    ci_ = 50;
}

void Plorg::setCi(const int & c)
{
    ci_ = c;
}

void Plorg::show() const
{
    std::cout << "name: " << name_ << std::endl;
    std::cout << "CI: " << ci_ << std::endl;
}


