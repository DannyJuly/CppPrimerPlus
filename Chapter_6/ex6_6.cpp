#include <iostream>
#include <string>
const int Size = 20;
using namespace std;
struct Donor{
    char name[Size];
    double money;
};

int main(){
    cout << "Enter the number of donors: ";
    int num;
    cin >> num;
    cin.get();
    Donor* donor = new Donor[num];
    for(int i = 0; i < num; i++){
        cout << "Enter the name: ";
        cin.getline(donor[i].name,20);
        cout << "Enter the money: ";
        cin >> donor[i].money;
        cin.get();
    }

    //statistic
    cout << "Grand Patrons: "<<endl;
    int count = 0;
    for(int i = 0; i < num; i++){
        if(donor[i].money > 10000){
            cout << donor[i].name << endl;
            count++;
        }          
    }
    if(count == 0)
        cout << "None"<<endl;
    cout << "Patrons: "<< endl;
    if(count == num)
        cout << "None";
    else
    {
        for(int i = 0; i < num; i++){
            if(donor[i].money <= 10000){
                cout << donor[i].name << endl;
                count++;
            }          
        }
    }
    

    delete [] donor;

    return 0;

}