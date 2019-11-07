#include "cpmv.h"
#include <iostream>

Cpmv::Cpmv(){
    pi = new Cpmv::Info;
    pi->qcode="0";
    pi->zcode="0";
    std::cout << "Defalut constructor" << std::endl;
    Display();

}

Cpmv::Cpmv(std::string q, std::string z){
    pi = new Info;
    pi->qcode=q;
    pi->zcode=z;
    std::cout << "Commom constructor" << std::endl;
    Display();
}

Cpmv::Cpmv(const Cpmv& cp){
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    std::cout << "Copy constructor" << std::endl;
    Display();
}

Cpmv::Cpmv(Cpmv && mv){
    pi = mv.pi;
    mv.pi = nullptr;
    std::cout << "Move constructor" << std::endl;
    Display();
}

Cpmv::~Cpmv(){
    //std::cout << "zcode" << pi->zcode<<std::endl;
    delete pi;
    std::cout << "Object deleted." <<std::endl;
}

Cpmv & Cpmv::operator=(const Cpmv & cp){
    if(this == &cp)
        return *this;
    delete pi;
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    std::cout << "Copy assignment Constructor" << std::endl;
    Display();
}

Cpmv & Cpmv::operator=(Cpmv && mv){
    if(this==&mv)
        return *this;
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    std::cout << "Move assignment constructor" << std::endl;
    Display();

}

Cpmv Cpmv::operator+(const Cpmv & obj) const{
    Cpmv cm;
    cm.pi = new Info;
    cm.pi->qcode = pi->qcode + obj.pi->qcode;
    cm.pi->zcode = pi->zcode + obj.pi->zcode;
    return cm;
}

void Cpmv::Display() const{
    std::cout <<"qcode: "<< pi->qcode << std::endl;
    std::cout <<"zcode: "<< pi->zcode << std::endl;

}