#include <iostream>

using namespace std;

typedef double (*func)(double, double);

double add(double,double);
double mult(double,double);
double calculate(double, double, func);

int main(){
    
    func pf[2] = {add,mult}; //pointers
    double x,y;
    cout << "Enter 2 floats: ";
    while((cin >> x) >> y)
    {
        double res;
        for(int i = 0; i < 2; ++i)
        {
            res = calculate(x, y, pf[i]);
            cout << "result #" << i << ": " << res << endl;
            cout << "Enter 2 floats again: " << endl;
        }
    }
    return 0;
}

double add(double x,double y){
    return x+y;
}

double calculate(double x, double y, func func)
{
    double ans = func(x,y);
    return ans;
}

double mult(double x, double y)
{
    return x*y;
}