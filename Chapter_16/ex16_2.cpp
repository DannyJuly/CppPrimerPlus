#include <iostream>
#include <string>
#include <cctype>
bool boot(const std::string & s);
const std::string reduce(const std::string & s);

int main(){
    using std::cout;
    using std::getline;
    using std::cin;
    using std::endl;
    std::string input;
    std::string reduced;
    cout << "Enter a sentence your want to check(q to quit): ";
    while(getline(cin, input) && input != "q"){
        reduced = reduce(input);
        if (boot(reduced))
            cout << input << " is palindrome!" << endl;
        else
            cout << input << " is not palindrome!" << endl;
        cout << "Enter anthoer word(q to quit): ";
    }
    cout << "Bye";
}

bool boot(const std::string & s){
    std::string rev(s.rbegin(),s.rend());
    return (rev == s);
}

const std::string reduce(const std::string & s){
    std::string result;
    //for(auto iter = s.begin(); iter!=s.end(); iter++)
    for(auto i : s){
        char ch = i;
        if(isalpha(ch)){
            ch = tolower(ch);
            result.push_back(ch);
        }
    }

    return result;
}