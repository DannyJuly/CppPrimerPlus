#include <iostream>
using namespace std;
namespace s
{
    int count = 1;
}
int main(){
    const char* ps = "adsf";
    //cout <<ps<< endl;
   // cout << (int* )ps;
    char ch[5]="av";
    char* pt = &ch[0];
    std::s::count++;
    cout << s::count;
}