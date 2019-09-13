#include <iostream>
#include <string>

using namespace std;

struct Pizza{
    string company;
    double diameter;
    double weight;
};

int main(){
    Pizza* p = new Pizza;

    cout<<"Enter the diameter of the pizza: ";
    cin>>p->diameter;
    cin.get();

    cout<<"Enter the company name: ";
    getline(cin,p->company); 

    cout << "Enter weight of pizza: ";
    cin >> p->weight;

    cout << "Company: " << p->company << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight:" << p->weight << endl;
    delete p;
    return 0;
}