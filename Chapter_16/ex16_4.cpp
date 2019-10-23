#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);
void show(long ar[], int n);

int main(int argc, char* argv[]){
    long arr[10] = {12, 13, 8, 15, 12, 3, 2, 12, 2, 7};
    show(arr, 10);
    int newarr = reduce(arr,10);
    show(arr, newarr);

    return 0;
}

int reduce(long ar[], int n){
    std::sort(ar, ar+n);
    auto past_end = std::unique(ar, ar + n);
    // std::cout << past_end <<std::endl;
    // std::cout << ar <<std::endl;
    // std::cout << past_end - ar <<std::endl;
    return past_end - ar; //subtraction between two address is the element between these two address
}

void show(long ar[], int n){
    for(int i = 0; i < n; i++)
        std::cout << ar[i] << " ";
    std::cout << std::endl;
}