#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    
    /*char* month[12]={"January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"};*/
    string month[12] {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"  
    };
    //array<array<int,3>,3> size;

    int sales[12];
    int sum = 0;
    for(int i =0; i<12; i++){
        cout<<"Enter the sales for "<<month[i]<<": ";
        cin>>sales[i];
        sum += sales[i];
    }
    cout<<"Sum: "<<sum;
}