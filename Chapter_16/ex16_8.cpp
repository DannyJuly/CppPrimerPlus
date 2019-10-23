#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <set>
inline void show(std::string & s) { std::cout << s << " ";}

//just for test, comparsion function for sort
bool cmp(const std::string & str1, const std::string & str2){
    return std::strcmp(str1.c_str(),str2.c_str()) > 0;   
}
int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::vector;
    using std::string;

    vector<string> mat;
    vector<string> pat;
    std::set<string> res2;
    string name;

    cout << "Mat, please Enter your friends' names(stop to stop): ";
    while(std::getline(cin,name) && name != "stop"){
        cout << "Another name: ";
        mat.push_back(name);
        res2.insert(name);
    }
    cout << "Pat, please Enter your friends' names(stop to stop): ";
    while(std::getline(cin,name) && name != "stop"){
        cout << "Another name: ";
        pat.push_back(name);
        res2.insert(name);
    }
    
    std::sort(mat.begin(),mat.end(),cmp);
    std::sort(pat.begin(),pat.end(),cmp);
    
    vector<string> res(pat.size()+mat.size());
    vector<string>::iterator itr;
    itr = std::set_union(mat.begin(),mat.end(),pat.begin(),pat.end(),res.begin());
    res.resize(itr - res.begin());
    std::sort(res.begin(), res.end(),cmp);
    

    cout << "The union of Mat and Pat's friends are: ";
    cout << endl;
    //for_each(res.begin(), res.end(), show);
    //for_each(res2.begin(), res2.end(), show);
    std::set<string>::iterator it;
    for(it =res2.begin(); it!=res2.end(); it++)
        cout << *it << " ";
    
}