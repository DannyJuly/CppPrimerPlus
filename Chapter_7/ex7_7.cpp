#include <iostream>

using namespace std;

const int Len = 10;

double* Fill_array(double *, int);
void Show_array(const double *, double*);
void Reverse_array(double *, double*);

int main(void)
{
    double a[Len] = {0.0};
    double* num;
    // fill the array
    num = Fill_array(a, Len);

    // show elements
    Show_array(a, num);

    // reverse array
    Reverse_array(a, num);
    cout << a;

    // show again
    Show_array(a, num);

    return 0;
}

double* Fill_array(double * arr, int n)
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
        cin >> elem;
        if(!cin){
          cout << "elem"<<elem;
          cin.clear();
          while(cin.get()!='\n')
            continue;
          cout << "Bad input; input process terminated" << endl;
          break;
        }
        else if(elem >= 0)
            arr[i] = elem;
        else
            break;
    }
    return arr+i-1;
}

void Show_array(const double * arr, double* ptr)
{
   // const double* p;
    for(arr; arr<=ptr; arr++)
        cout << *arr << " ";
    cout << endl;
}

void Reverse_array(double * arr, double* ptr)
{

    while(arr <= ptr){
        swap(*arr++,*ptr--);
    }

}

