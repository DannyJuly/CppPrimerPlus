#include <iostream>
#include <initializer_list>

using namespace std;

template<class T>
T average_list(std::initializer_list<T> il);

int main(){
    auto q = average_list({15.4,10.7,9.0});
    cout << q << endl;

    cout << average_list({20,30,19,17,45,38}) << endl;

    auto ad = average_list<double>({'A',70,65.33});
    cout << ad << endl;
    return 0;
}


template<class T>
T average_list(std::initializer_list<T> il){
    T tot=0;
    for(auto p = il.begin();p != il.end(); p++)
        tot+=*p;
    return tot/(il.begin()-il.end());
}