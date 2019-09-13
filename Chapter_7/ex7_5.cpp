#include <iostream>
#include <algorithm>
#include <vector> //or using vector
 using namespace std;
long fact(int,int*);

int main(void)
{
   
    
    long res;
    int n;

    cout << "Enter number: ";
    while(cin >> n)
    {
        int* vec = new int[n+1] ;
        res = fact(n,vec);
       // cout << vec[5];
        cout << n << "! = " << res << endl;
        cout << "Enter number: ";
    }

    return 0;
}

long fact(int n,int* vec)
{
    if(n == 0)
        return 1;
    else if(vec[n]!=0)
        return vec[n];
    vec[n] = n*fact(n-1,vec);
    return vec[n];
}