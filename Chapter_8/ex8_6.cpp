#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T *, int n);
template <> char* maxn<char*>(char **, int);

template <typename T>
void show(T * arr, int n);
template <> void show<char*>(char **, int);

int main(){
    
    int arr_int[6] = {1,3,2,5,3,4};
    double arr_flt[4] = {2.3,5.2,7.3,2.4};
    char * arr_ch[4] = {
        "kunpeng",
        "songwei",
        "dian",
        "qixuan"
    };
    cout << arr_ch;

    show(arr_int, 6);
    cout << "Max int: " << maxn(arr_int, 6) << endl;

    show(arr_flt, 4);
    cout << "Max double: " << maxn(arr_flt, 4) << endl;

    show(arr_ch, 4);
    cout << "Max string: " << maxn(arr_ch, 4) << endl;

    return 0;
}


template <typename T>
T maxn(T* arr, int n){
    T maxn = arr[0];
    for(int i = 0; i < n; i++)
        if(arr[i] > maxn)
            maxn = arr[i];
    
    return maxn;
}
template <>
char * maxn<char *>(char ** arr, int n)
{
    int max_len = strlen(arr[0]);
    int tmp_len;
    int max_idx = 0;
    for(int i = 0; i < n; i++){
        tmp_len = strlen(arr[i]);
        if(tmp_len > max_len){
            max_len = tmp_len;
            max_idx = i;
        }
    }
    return arr[max_idx];
}

template <typename T>
void show(T * arr, int n)
{
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

template <>
void show<char*>(char ** arr, int n){
    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;
}
