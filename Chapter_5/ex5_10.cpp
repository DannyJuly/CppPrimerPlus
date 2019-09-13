#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number of rows: ";
    int rows;
    cin>>rows;
    for(int i =1; i <= rows; i++){
        for(int j = rows; j > i; j--)
            cout<<".";
        for(int k = 1; k <= i; k++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}