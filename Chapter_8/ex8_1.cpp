#include <iostream>

using namespace std;
void printstr(const char* , int n = 0);

int main(){
    char str[10] = "silly";
    
    cout << "call first time" << endl;
    printstr(str);

    cout << "call second time" << endl;
    printstr(str,0);

    cout << "call third time" << endl;
    printstr(str,2);
}

void printstr(const char* str, int n)
{
    static int times = 1;
    if(n){
        for(int i = 1; i <= times; i++)
            cout << str << endl;
    }
    else
        cout << str << endl;

    times++;
    
}