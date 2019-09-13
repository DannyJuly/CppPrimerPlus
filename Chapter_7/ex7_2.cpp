#include <iostream>
const int Numscore = 10;

int fill(double*);
void show(double* , int);
int get_avg(double*, int);
using namespace std;



int main(){
    int n;
    double scores[10];
    n = fill(scores);
    cout << "The scores are: ";
    show(scores, n);
    cout << "The average: ";
    cout << get_avg(scores,n);


    return 0;
}

int fill(double* scores){
    int i;
    for( i = 0; i < Numscore; i++){
        cout << "Enter score("<<i+1<<"): ";
        double score;
        cin >> score;
        if(score <= 0.0)
            break;
        scores[i] = score;
    }

    return i;
}

void show(double* scores, int n)
{
    for(int i=0; i < n;i++)
        cout<< scores[i]<<" ";
    cout<<endl;
}

int get_avg(double* scores, int n)
{
    double sum;
    for(int i = 0; i < n; i++){
        sum += scores[i];
    }
    return sum/(double)n;
}