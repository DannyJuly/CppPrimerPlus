#include "classic.h"
#include <iostream>
#include <cstring>

//base class
Cd::Cd(const char * s1, const char * s2, int n, double x){
    performers = new char[std::strlen(s1) + 1];
    label = new char[std::strlen(s2) + 1];
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & cd){
    int len1 = std::strlen(cd.performers);
    int len2 = std::strlen(cd.label);
    performers = new char[len1+1];
    std::strcpy(performers, cd.performers);
    label = new char[len2+1];
    std::strcpy(label, cd.label);
    selections = cd.selections;
    playtime = cd.playtime;
}

Cd::Cd(){
    performers = nullptr;
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd & Cd::operator=(const Cd & cd){
    if(this == &cd)
        return *this;
    delete [] performers;
    delete [] label;
    int len1 = std::strlen(cd.performers);
    int len2 = std::strlen(cd.label);
    performers = new char[len1+1];
    std::strcpy(performers, cd.performers);
    label = new char[len2+1];
    std::strcpy(label, cd.label);
    selections = cd.selections;
    playtime = cd.playtime;
    return *this;
}

Cd::~Cd(){
    delete [] performers;
    delete [] label;
}

void Cd::Report() const{
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

//Classic class
Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x)
    : Cd(s1, s2, n, x)
{
    works = new char[std::strlen(w)+1];
    std::strcpy(works, w);
}
Classic::Classic(const Classic & cd)
    : Cd(cd)
{
    works = new char[std::strlen(cd.works)+1];
    std::strcpy(works, cd.works);
}

Classic::Classic(){
    works = new char[1];
    works[0] = '\0';
}

Classic & Classic::operator=(const Classic & cd){
    if(this == &cd)
        return *this;
    Cd::operator=(cd); //domain parse
    delete [] works;
    works = new char[std::strlen(cd.works)+1];
    std::strcpy(works, cd.works);
    return *this;

}
Classic::~Classic(){
    delete [] works;
}

void Classic::Report() const{
    Cd::Report();
    std::cout << "works: " << works << std::endl;
}