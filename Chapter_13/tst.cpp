#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char na[10];
    std::strcpy(na, "ahfkjh\0asdhfkasdhfk");
    cout << na;
    int a = 10;
    a = a << 1;
    cout << '\a';
    cout << 21;
}