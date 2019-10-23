#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    ifstream fin1("fin1.txt",ios_base::in);
    ifstream fin2("fin2.txt",ios_base::in);
    if(!fin1.is_open() && !fin2.is_open()){
        cerr << "Failed to open fin1.txt or fin2.txt" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout("fout.txt", ios_base::out);
    if(!fout.is_open()){
        cerr << "Failed to open fout.txt" << endl;
        exit(EXIT_FAILURE);
    }

    string word1, word2;
    while(getline(fin1,word1) && getline(fin2,word2))
        fout << word1 << " " << word2 << endl;
    if(fin1.eof()){
        fout << word2 << endl;
        while(getline(fin2,word2))
            fout << word2 << endl;
    }
        
    else{
        fout << word1 << endl;
        while(getline(fin1,word1))
            fout << word1 << endl;
    } 
        

    fin1.close();
    fin2.close();
    fout.close();

    return 0;


}