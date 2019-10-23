#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm> 
std::vector<int> Lotto(int total, int select);

int main(){
    const int Total = 51, Select = 6;
    std::cout<<"Play?<y/n>: ";
    char choice;
    //std::cin >> choice;
    std::vector<int> result;
    while(std::cin >> choice && choice != 'n'){
        while(std::cin.get() != '\n')
            continue;
        result = Lotto(Total, Select);
        for(std::vector<int>::iterator itr = result.begin(); itr != result.end(); itr++)
            std::cout << *itr <<" ";
        std::cout << std::endl;
        std::cout << "Play again?<y/n>: ";

    }
    std::cout << "Bye";
    
    return 0;

}


std::vector<int> Lotto(int total, int select){
    using std::vector;
    vector<int> all(51);
    for(int i = 1; i <= total; i++)
        all[i] = i;
    std::random_shuffle(all.begin(),all.end());
    vector<int> result(all.begin(),all.begin()+select);

    return result;

}
