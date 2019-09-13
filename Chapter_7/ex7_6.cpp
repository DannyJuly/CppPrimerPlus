#include <iostream>

using namespace std;

const int Len = 10;

int Fill_array(double *, int);
void Show_array(const double *, int);
void Reverse_array(double *, int);

int main(void)
{
    double a[Len] = {0.0};
    int num;
    // fill the array
    num = Fill_array(a, Len);

    // show elements
    Show_array(a, num);

    // reverse array
    Reverse_array(a, num);

    // show again
    Show_array(a, num);

    return 0;
}

int Fill_array(double * arr, int n)
{
    int i;
    double elem;

    // reset array
    for(i = 0; i < n; ++i)
        arr[i] = 0.0;

    // fill array
    for(i = 0; i < n; ++i)
    {
        cout << "Enter arr[" << i << "]: ";
        if(cin >> elem)
            arr[i] = elem;
        else
            break;
    }
    return i;
}

void Show_array(const double * arr, int n)
{
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double * arr, int n)
{
    int i =0, j = n-1;
    while(i < j){
        swap(arr[i++],arr[j--]);
    }
}

