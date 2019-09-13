#include <iostream>

const int Len = 5;
template <typename T>
T max5(T *);

int main(){
    using namespace std;
    int arr_int[Len] = {1,2,3,4,5};
    double arr_flt[Len] = {1.2,2.2,3.1,1.4,2.1};

    cout << "Max int: " << max5(arr_int) << endl;
    cout << "Max float: " << max5(arr_flt) << endl;

    return 0;

}

template <typename T>
T max5(T * arr){
    T max = arr[0];
    for(int i = 0; i < Len; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}