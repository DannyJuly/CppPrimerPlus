#include <iostream>
#include <array>
const int Size = 10;
using namespace std;

int main(){
    cout << "Enter the donation:";
    array<double, Size> donations;
    double donation;
    int i;
    for( i = 0; i < Size && cin>>donation; i++)
        donations[i] = donation;
    int n = i + 1;

    //get average
    double sum = 0;
    for(auto i : donations)
        sum += i;
    double avg;
    avg = sum / (double)n;
    cout.precision(2);
    cout << fixed;
    cout << "Average = " << avg <<endl;
    cout << "Number larger than average:" << endl;
    for(i = 0; i < n; ++i)
    {
        if(donations[i] > avg)
            cout << donations[i] << " ";
    }

    cout << endl;

    return 0;
}