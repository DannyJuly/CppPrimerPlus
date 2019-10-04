#include "move.h"
#include <iostream>

Move::Move(double a, double b){
    std::cout << "Create new object: "<< std::endl;
    x = a;
    y = b;
}

void Move::showmove() const{
    std::cout<<"Current x: " << x << std::endl;
    std::cout<<"Current y: " << y << std::endl;
}

Move Move::add(const Move & m) const{
    Move temp = Move();
    temp.x = this->x + m.x;
    temp.y = this->y + m.y;
    return temp;
}

void Move::reset(double a, double b){
    std::cout<<"Reset x and y"<<std::endl;
    x = a;
    y = b;
}