#include <iostream>
#include <fstream>
#include <cstdlib>

const int Size = 81;

int main(){
    using namespace std;

    struct Patron{
        char name[Size];
        double money;
    };

    ifstream infile;
    infile.open("patron.txt"); //this file must be in your project root dir

    if(!infile.is_open()){
        cout << "Could not open file."<<endl;
        cout << "program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    //total number
    int num;
    infile >> num;
    cout << num << endl;
    infile.get();

    //allocate memory
    Patron* pt = new Patron[num];

    //read data from file
    for(int i = 0; i < num; i++){
        infile.getline(pt[i].name, Size);
        infile >> (pt+i)->money;
        infile.get();
    }
    for(int i = 0; i < num; ++i)
    {
        if((pt + i)->money > 10000)
            cout << (pt + i)->name << endl;
    }

    infile.close();

    delete [] pt;
    return 0;

}