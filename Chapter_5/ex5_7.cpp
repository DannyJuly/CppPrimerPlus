#include <iostream>
using namespace std;
struct Car{
    string producer;
    int year;
};

int main(){
    cout << "How many cars do you wish to catalog? ";
    int ncar;
    (cin >> ncar).get();
    Car* car = new Car[ncar];
    for(int i = 1; i<= ncar; i++){
        cout <<"Car #"<<i<<endl;
        cout <<"Please enter the maker: ";
        getline(cin,car[i-1].producer);
        cout <<"Please enter the year made: ";
        cin >> car[i-1].year;
        cin.get();
        
    }
    cout<<"Here is your collection: "<<endl;
    for(int i = 0; i < ncar; i++){
        cout<<car[i].year << " "<<car[i].producer<<endl;
    }
    delete [] car;
    return 0;
}