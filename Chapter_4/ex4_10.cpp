#include <iostream>
#include <array>

int main(void)
{
    using namespace std;
    array<double, 3> grades;
    //double grades[3];
    for(int i = 0; i < 3; ++i)
    {
        cout << "Your grade: ";
        cin >> grades[i];
    }
    
    double avg = (grades[0] + grades[1] + grades[2])/3.0;
    
    cout << "Average grade: " << avg << endl;
    return 0;
}