#include <iostream>
#include <string>

struct CandyBar{
    std::string brand;
    double weight;
    int calorie;
    CandyBar(std::string x, double y, int z):brand(x),weight(y),calorie(z){}
};//snack;

int main(){
    using namespace std;
   
    /*snack.brand = "Mocha";
    snack.weight = 2.3;
    snack.calorie = 350;
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };*/
    CandyBar snack("Mocha",2.3,350);
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;
    
    return 0;

}