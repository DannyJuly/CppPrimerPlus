#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar{
    char brand[30];
    double weight;
    int calorie;
};
void set(CandyBar& , char* brand =(char*) "Millennium Munch", double weight = 2.85, int calorie = 350);
void show(const CandyBar & );


int main(){
    char brand[30] = "Munch";
    double wg = 2.5;
    int cal = 390;
    CandyBar candy;
    set(candy);
    cout << "Original Bar: " << endl;
    show(candy);
    set(candy, brand,2.5,390);
    cout << "New Bar: " << endl;
    show(candy);

    return 0;
}

void set(CandyBar& candy, char* brand, double weight, int calorie){
    strcpy(candy.brand,brand);
    candy.weight = weight;
    candy.calorie = calorie;
}

void show(const CandyBar & cb)
{
    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Heat: " << cb.calorie << endl;
}