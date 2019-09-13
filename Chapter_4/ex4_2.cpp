#include <iostream>
#include <string>
using namespace std;
const int Strlen = 20;

int main(){
    char first_name[Strlen], last_name[Strlen];
    char grade;
    int age;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    //cin.clear();
    //cin.sync();
    //string str = "\n";
    //getline(cin,str);
    cin.get();
    cout<<"What is your first name? ";
    cin.get(first_name,20);
    cin.get();
    cout << "What is your last name? ";
    cin.get(last_name, 20); 
    
    cout << "What is your age? ";
    //cin >> age;
    grade++;
    
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}