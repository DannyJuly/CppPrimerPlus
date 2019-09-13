#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name, last_name;
    char grade;
    int age;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    //cin.clear();
    //cin.sync();
    string str = "\n";
    getline(cin,str);
    cout<<"What is your first name? ";
    getline(cin,first_name);
    cout << "What is your last name? ";
    getline(cin, last_name); 
    
    cout << "What is your age? ";
    //cin >> age;
    grade++;
    
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}