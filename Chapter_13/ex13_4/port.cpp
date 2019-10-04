#include "port.h"
#include <cstring>
using std::strcpy;
using std::strlen;
using std::cout;
 
//base class
Port::Port(const char * br, const char * st, int b){
    brand = new char[strlen(br)+1];
    std::strcpy(brand, br);
    std::strncpy(style, st, sizeof(style));
    bottles = b;
}

    
Port::Port(const Port & p){
    brand = new char[strlen(p.brand)+1];
    std::strcpy(brand, p.brand);
    std::strncpy(style, p.style, sizeof(style));
    bottles = p.bottles;
}

// overloaded functions
Port & Port::operator=(const Port & p){
    if(this == & p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand)+1];
    std::strcpy(brand, p.brand);
    std::strncpy(style, p.style, sizeof(style));
    bottles = p.bottles;
    return *this;
}
Port & Port::operator+=(int b){
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b){
    bottles -= b;
    return *this;
}
void Port::Show() const{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Style: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}
// friend functions
std::ostream & operator<<(std::ostream & os, const Port & p){
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    : Port(br, "vintage", b)
{
    nickname = new char[strlen(nn)+1];
    strcpy(nickname, nn);
    year = y;
}
VintagePort::VintagePort(const VintagePort & vp)
    : Port(vp)
{
    nickname = new char [std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp){
    if(this == & vp)
        return *this;
    delete [] nickname;
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname)+1];
    strcpy(nickname, vp.nickname);
    year = vp.year;

    return *this;

}

void VintagePort::Show() const{
    Port::Show();
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;    
}

// friend funcitions
std::ostream & operator<<(std::ostream & os, const VintagePort & vp){
    os << (const Port &)vp << ", " << vp.nickname << ", " << vp.year;
    return os;
}