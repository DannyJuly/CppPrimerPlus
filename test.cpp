#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
void binaryInsert(vector<int> &vec, int target){
    int left = 0, right = vec.size();
    while(left < right){
        int mid = left + (right - left)/2;
        if(vec[mid] == target)
            return;
        else if(vec[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    vec.insert(vec.begin()+left, target);
    return;
}

class base{
    public:
        base(int a_) { a =b=c =a_;}
        int func() {return a;}
        virtual ~base() {}
    private:
        int a;
        int b;
        int c;
};

class drive : public base{
    public:
        drive(int b_) :base(b_-1){b = b_ ;c = b_;}
        int func2() {return b;}
        virtual ~drive() {}
    private:
        int b;
        int c;
};

void trans(base & bad)
{
    cout << sizeof(bad)<<endl;
    base *pta = &bad;
    cout <<pta<<endl;
    drive *ptr = &((drive & )bad);
    cout << ptr <<endl;
    cout << sizeof(((drive & )bad));
    int out = ((drive & )bad).func2();
    std::cout << out<<endl;
    cout << bad.func();
}
int main(){


    //base * b;
    drive a(99);
    drive *pta = &a;
    drive b = (drive&)((base&)a);
    base *ptb = &b;
    cout <<   ptb<<endl<<pta <<endl;
    cout << sizeof(b)<<endl;
    cout << sizeof(a)<<endl;
    
    cout << ((drive&)b).func2();
    //cout << a.func()<<endl;
    drive bb(99);
    trans(bb);
    srand(time(0));
    int count = 0;
    int sum = 0;
    for(int i = 0; i < 1000000; i++){
        count++;
        if(count % 10 == 0){
            count = 0;
            sum++;
        }
        else{
            if(rand() % 36 <= 1)
            sum++;
            count = 0;
        }
    }
    cout << "sum " <<sum;

        



}