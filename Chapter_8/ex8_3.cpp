#include <iostream>
#include <string>

using namespace std;
void toUpper(string& str);

int main(){

    cout << "Enter a string (q to quit): ";
    string str;
    getline(cin,str);
    while(str != "q"){
        toUpper(str);
        cout << str << endl;

        cout << "Next sring (q to quit): ";
        getline(cin,str);
    }


}

void toUpper(string& str){
    for(int i = 0; i < str.size(); i++){
        if(isalpha(str[i]))
            str[i] = toupper(str[i]);
    }
}