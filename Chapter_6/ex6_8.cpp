#include <fstream>
#include <iostream>

int main(){
    using namespace std;

    ifstream infile;
    infile.open("patron.txt"); //copy this file to you project root directory

    char ch;
    int count = 0;
    if(infile.fail())//文件打开失败:返回0
    {
        return 0;
    }
    while(infile >> ch)
        count++;

    infile.close();

    cout << "There are " << count << " characters" <<endl;

    return 0;
}