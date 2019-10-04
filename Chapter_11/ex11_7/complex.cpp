#include "complex.h"
#include <iostream>


Complex::Complex(double real, double img){
    real_ = real;
    img_ = img;
}

Complex Complex::operator+(const Complex & c) const{
     Complex result;
     result.real_ = this->real_ + c.real_;
     result.img_ = this->img_ + c.img_;
     return result;
}

Complex Complex::operator-(const Complex & c) const{
     Complex result;
     result.real_ = this->real_ - c.real_;
     result.img_ = this->img_ - c.img_;
     return result;
}

Complex Complex::operator-() const{
     return Complex(-real_, -img_);
}

Complex Complex::operator*(const Complex & c) const{
     return Complex(real_ * c.real_ - img_*c.img_, real_*c.img_ + img_ * c.real_);
}

Complex Complex::operator~() const{
    return Complex(real_, -img_);
}

std::ostream & operator<<(std::ostream & os, const Complex & c){
    os << "(" << c.real_ << "," << c.img_ << "i" <<")"<<std::endl;
    return os;
}

std::istream & operator>>(std::istream & is, Complex & c){
    std::cout << "real: ";
    is >> c.real_;
    std::cout << "imaginary: ";
    is >> c.img_;
    return is;
}
