#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter a sentense with a '$' in it: " << endl;
    int ct = 0;
    char ch;
    while(cin.get() != '$')
        ct++;
    cin.putback(ch);

    while(cin.get()!= '\n')
        continue;
    
    cout << "There are " << ct << " characters before $" << endl;

    return 0;
    

}