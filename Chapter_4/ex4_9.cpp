#include <iostream>
#include <string>

struct CandyBar{
    std::string brand;
    double weight;
    int calorie;      
};

int main(void)
{
    using namespace std;
    
    CandyBar* snacks = new CandyBar[3];
    for(int i =0; i < 3; i++){
        snacks[i] = {"Mocha Munch", 2.3, 350};
    } 

    
    for(int i = 0; i < 3; ++i)
    {
        cout << "Brand: " << snacks[i].brand << endl;
        cout << "Weight: " << snacks[i].weight << endl;
        cout << "Calorie: " << snacks[i].calorie << endl;   
    }
    
    return 0;
}