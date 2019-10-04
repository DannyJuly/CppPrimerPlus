#include <iostream>
#include "cow.h"
int main()
{
    Cow c1;

    Cow c2 = Cow("shao", "coding", 120);
    c2.show();

    Cow c3 = c2;  // copy constructor
    c3.show();

    c1 = c3;  // overload assignment operator
    c1.show();

    return 0;
}
