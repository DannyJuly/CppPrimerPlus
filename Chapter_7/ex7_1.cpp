#include <iostream>

using namespace std;
double get_avg(int,int);

int main(){
    cout << "Please enter two numbers: ";
    int num1,num2;
    cin >> num1 >> num2;
    while(num1!=0 && num2 != 0){
        cout << "Harmonic mean: "<<get_avg(num1,num2)<<endl;;
        cout << "Please enter two numbers: ";
        cin >> num1 >> num2;
    }
    return 0;
}





double get_avg(int a, int b)
{
    return 2.0*a*b/(a+b);
}