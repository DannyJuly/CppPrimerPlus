#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char ch;
    cout << "Please input: ";
    cin.get(ch);
    while(ch != '@'){
        if(isupper(ch))
            ch = tolower(ch);
        else if(islower(ch))
            ch = toupper(ch);
        if(!isdigit(ch))
            cout << ch;
        cin.get(ch);
    }

    cout<<endl;
    return 0;

}