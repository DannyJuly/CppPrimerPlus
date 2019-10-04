#include "cow.h"
#include <cstring>


Cow::Cow(){
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0; 
}

Cow::Cow(const char * nm, const char * h0, double wt){
    std::strcpy(name,nm);
    int len;
    len = std::strlen(h0);
    hobby = new char[len+1];
    std::strcpy(hobby, h0);
    weight = wt;
}

Cow::Cow(const Cow & c){
    std::strcpy(name, c.name);
    int len;
    len = std::strlen(c.hobby);
    hobby = new char[len+1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow & Cow::operator=(const Cow & c){
    std::strcpy(name, c.name);
    int len = std::strlen(c.hobby);
    hobby = new char[len+1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;

    return *this;
}

void Cow::show() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}