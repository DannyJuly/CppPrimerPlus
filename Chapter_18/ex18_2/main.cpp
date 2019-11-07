#include <iostream>
#include "cpmv.h"
#include <utility>

using namespace std;

int main(){
    //default
    Cpmv cm1;
    //common
    string q = "123";
    string z = "456";
    Cpmv cm2(q,z);
    //copy
    Cpmv cm3=cm2;
    //move 
    Cpmv cm4=std::move(cm3);
    //cm3.Display();

    Cpmv cm5,cm6;
    //copy assign
    cm5 = cm2;
    //move assign
    cm6 = std::move(cm1+cm2);

}