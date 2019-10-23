#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]){
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ofstream;

    if(argc == 1){
        std::cerr << "Please enter file name." << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Filename is: ";
    std::string fname = argv[1];
    ofstream fout;
    fout.open(fname, std::ios_base::out);

    cout << "Enter something: " << endl;
    char ch;
    while (cin.get(ch)){
        fout.put(ch);
    }
    if(cin.eof())
        cout << "\n It is EOF" << endl;
    else{
        std::cerr << "Unknown error" << endl;
        exit(EXIT_FAILURE);
    }

    fout.close();
    return 0;

}