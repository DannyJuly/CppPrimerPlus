#include <iostream>
#include <cmath>

using namespace std;
const double trans  = 12;
int main(){
    cout<<"Please enter your height:_____\b\b\b\b\b";
    double inch;
    cin>>inch;
    double feet = inch/trans;
    cout<<"Your height is:"<<feet<<" feets\n";
    return 0;

}