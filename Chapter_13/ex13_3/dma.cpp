#include "dma.h"
#include <cstring>

//AC
ABC::ABC(const char* l, int r){
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC & a){
    label = new char[std::strlen(a.label) + 1];
    std::strcpy(label, a.label);
    rating = a.rating;
}

ABC::~ABC(){
    delete [] label;
}

void ABC::View() const{
    std::cout << "label: " << label << std::endl;
    std::cout << "rating: " << rating << std::endl;
}

//overload function
ABC & ABC::operator=(const ABC & a){
    if(this == &a)
        return *this;
    delete [] label;
    label = new char [std::strlen(a.label) + 1];
    std::strcpy(label, a.label);
    rating = a.rating;

    return *this;
}

//friend
std::ostream & operator<<(std::ostream & os, const ABC & a){
    os << a.label << ", " << a.rating;
    return os;  //??
}

/*******
baseDMA
*******/
baseDMA::baseDMA(const char * l, int r)
 : ABC(l,r){}

std::ostream & operator<<(std::ostream & os, const baseDMA & bd){
    os << (const ABC &) bd; //p529
    return os;
}

//lacksDMA
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : ABC(l,r){
    std::strncpy(color, c, sizeof(color)); 
}

lacksDMA::lacksDMA(const char * c, const ABC & a)
    : ABC(a)
{
    std::strncpy(color, c, sizeof(color)); 
}

void lacksDMA::View() const
{
    ABC::View();
    std::cout << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & ld)
{
    os << ld.color << ", " << (const ABC &)ld;
    return os;
}

/****************
 * hasDMA methods
 ****************/
hasDMA::hasDMA(const char * s, const char * l, int r)
    : ABC(l,r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const ABC & c)
    : ABC(c)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hd)
    :ABC(hd)
{
    style = new char [std::strlen(hd.style) + 1];
    std::strcpy(style, hd.style);
}

hasDMA::~hasDMA(){
    delete [] style;
}

void hasDMA::View() const
{
    ABC::View();
    std::cout << style << std::endl;
}

hasDMA & hasDMA::operator=(const hasDMA & hd){
    if( this == &hd)
        return *this;
    ABC::operator=(hd);
    delete [] style;
    style = new char [std::strlen(hd.style) + 1];
    std::strcpy(style, hd.style);
    
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << rs.style << ", " << (const ABC &)rs;
    return os;
}

