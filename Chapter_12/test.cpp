#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    string b;
    b.push_back('a');
    b.push_back('a');
    b.erase(b.end()-1);
    cout << b;
}