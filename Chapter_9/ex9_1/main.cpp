#include "golf.h"
const int N=5;
extern int abc;
int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    cout << abc;
    golf gs[N];
    int i;
    int result;

    for(int i = 0; i < N; i++){
        cout << "golf[" << i << "]" << endl;
        result = setgolf(gs[i]);
        if(!result){
            cout << "Empty name detected.";
            break;
        }
    }
    int nout = i;
    for(i = 0; i < nout; i++){
        cout << "golf[" << i << "]" << endl;
        showgolf(gs[i]); 
    }

    return 0;
}
