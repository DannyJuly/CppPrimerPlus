#include <iostream>
using namespace std;

int main(){
    cout<<"Enter an integer(0 to stop): ";

    int num,sum = 0;
    cin>>num;
    while(num!=0){
        sum+=num;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Enter an integer(0 to stop): ";
        cin>>num;
    }
    cout<<"hahahahh,bye";
    return 0;
}