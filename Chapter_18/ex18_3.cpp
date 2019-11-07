#include <iostream>



long double sum_value(){
    return 0;
}

template<class  T, class... Args>
long double sum_value(T value, Args... args){
    return value+sum_value(args...);
}


int main(){
    double a=1.2,b=23.2,c=6.0;
    long double val = sum_value(a,b,c);
    std::cout << val<< std::endl;
}