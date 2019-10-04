#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
class Complex{
    private:
        double real_;
        double img_;
    public:
        Complex(double real = 0, double img = 0);
        Complex operator+(const Complex & c) const;
        Complex operator-(const Complex & c) const;
        Complex operator-() const;
        Complex operator*(const Complex & c) const;
        Complex operator~() const;
        //friend
        friend Complex operator*(double x, const Complex & c){
            return Complex(x * c.real_, x * c.img_);
        }
        friend std::ostream & operator<<(std::ostream & os, const Complex & c);
        friend std::istream & operator>>(std::istream & is, Complex & c);
};

#endif