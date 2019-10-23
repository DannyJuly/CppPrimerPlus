#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <algorithm>
const int SIZE = 1000000;

int main(){
    using std::cout;
    using std::endl;
    std::vector<int> vi0(SIZE,0);
    for(int i = 0; i < SIZE; i++)
        vi0.at(i) = rand();
    
    std::vector<int> vi(vi0);
    std::list<int> li(SIZE,0);

    //sort vector 
    clock_t start = std::clock();
    std::sort(vi.begin(),vi.end());
    std::copy(vi0.begin(),vi0.end(),li.begin());
    clock_t end = std::clock();
    //get the time 
    cout << "sort vector time: "
         << (double)(end - start)/CLOCKS_PER_SEC << endl;
    //sort list
    start = std::clock();
    li.sort();
    end = std::clock();
    cout << "Sort list time: "
         << (double) (end-start)/CLOCKS_PER_SEC << endl;
    
    //sort vector then copy to list
    std::copy(vi0.begin(),vi0.end(),li.begin());
    start = std::clock();
    std::copy(li.begin(),li.end(),vi.begin());
    std::sort(vi.begin(),vi.end());
    std::copy(vi.begin(), vi.end(), li.begin());
    end = std::clock();
    cout << "copy+sort+copy time: "
         << (double)(end-start)/CLOCKS_PER_SEC << endl;

    return 0;



}