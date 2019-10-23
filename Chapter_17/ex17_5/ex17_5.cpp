#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<string> mats;
    vector<string> pats;
    vector<string> all;

    ifstream fmat("mat.dat", ios_base::in), fpat("pat.dat", ios_base::in);
    if(!fmat.is_open() || !fpat.is_open()){
        cerr << "Failed to open input files" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout("all", ios_base::out);
    if(!fout.is_open()){
        cerr << "Failed to open input files" << endl;
        exit(EXIT_FAILURE);
    }

    string name;
    while(fmat >> name)
        mats.push_back(name);
    
    while(fpat >> name)
        pats.push_back(name);

    all.reserve(mats.size() + pats.size());
    all.insert(all.end(),mats.begin(),mats.end());
    all.insert(all.end(),pats.begin(), pats.end());
    sort(all.begin(), all.end());
    auto past_end = unique(all.begin(),all.end());
    cout << "All friends: " << endl;
    all.resize(past_end - all.begin());
    for(auto i : all)
        fout << i << " ";
    cout << "Finished";
    

}
