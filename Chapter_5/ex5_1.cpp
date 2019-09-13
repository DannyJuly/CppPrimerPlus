#include <iostream>

int main(){
    using namespace std;

    cout<<"Enter 2 integers: ";
    int input[2];
    for(int i=0; i < 2; i++){
        cin >> input[i];
    }

    int sum;
    if(input[0] < input[1])
        for(int i = input[0]; i<= input[1]; i++)
            sum += i;
    else
    {
        for(int i = input[1]; i<= input[0]; i++)
            sum += i;
    }
    cout<<"Sum: "<<sum;
    return 0;
    

}