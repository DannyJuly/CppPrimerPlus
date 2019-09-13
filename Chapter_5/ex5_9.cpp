#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout<<"Enter words (to stop, type the word done): ";
    string word;
    cin >> word;
    int num = 0;
    while(word!="done"){
        num++;
        cin >> word;
    }

    cout<<"You enter a total of "<<num<<" words";
    return 0;

}