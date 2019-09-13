#include <iostream>
#include <cstring>

using namespace std;
struct stringy{
    char * str;
    int ct;
};
void set(stringy &, char *);
void show(const stringy & , int n = 1);
void show(const char *, int n = 1);


int main(void)
{
    stringy beauy;
    char testing[] = "Reality isn't what it used to be.";

    set(beauy, testing);
    show(beauy);
    show(beauy, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy & beany, char * str){
    beany.ct = strlen(str);
    beany.str = new char[beany.ct+1];
    strcpy(beany.str, str);
}

void show(const stringy & beany, int n){
    for(int i = 0; i < n; i++){
        cout << beany.str << endl;
    }
}

void show(const char * str, int n){
    while(n-->0)
        cout << str << endl;
}