#include <iostream>
#include <array>
#include <iomanip>   //setprecision
const int ArSize = 16;

int main(){
    std::array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1l;
    for(int i = 2; i< ArSize; i++)
        factorials[i] = i * factorials[i-1];
    std::cout<<std::setprecision(0)<<std::fixed;
    for(int i=0; i < ArSize; i++){
        std::cout << i <<"! ="<<factorials[i]<<std::endl;
    }
    return 0;
}