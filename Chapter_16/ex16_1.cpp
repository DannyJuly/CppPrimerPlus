#include <iostream>
#include <string>

bool boot(const std::string & s);

int main(){
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;

    string input;
    int a;
    cout << "Enter a word(q to quit): ";
    while(std::getline(cin, input) && input != "q"){
        if(boot(input))
            cout << input << " is palindrome!" << endl;
        else
            cout << input << " is not palindrome" << endl;
        cout << "Enter another word(q to quit): ";
    }
    cout << "Bye";
}

bool boot(const std::string & s){
    std::string rev(s.rbegin(), s.rend());
    return (rev == s);
}