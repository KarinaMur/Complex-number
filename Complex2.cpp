#include <iostream>
#include <cstdlib>
#include "Complex2.h"
using namespace std;


Complex::Complex()
{
    re=0;
    im=0;
}
Complex::Complex(double re,double im)
{
    this->re=re;
    this->im=im;
}
double Complex::get_re() {return re;}
double Complex::get_im() {return im;}

void Complex::set_re(double re) {this->re=re;}
void Complex::set_im(double im){this->im=im;}

Complex Complex::sum(const Complex &a) const
{
    Complex tmp;
    tmp.re=re+a.re;
    tmp.im=im+a.im;
    return tmp;
}
Complex Complex::sub(const Complex &a) const
{
    Complex tmp;
    tmp.re=re+a.re;
    tmp.im=im+a.im;
    return tmp;
}
Complex Complex::mul(const Complex &a) const
{
    Complex tmp;
    tmp.re=(re*(a.re))-(im*(a.im));
    tmp.im=(re*(a.im))+(im*(a.re));
    return tmp;
}
Complex Complex::operator+(const Complex &a) const
{
    Complex tmp;
    tmp.re=re+a.re;
    tmp.im=im+a.im;
    return tmp;
}
Complex Complex::operator-(const Complex &a) const
{
    Complex tmp;
    tmp.re=re+a.re;
    tmp.im=im+a.im;
    return tmp;
}
Complex Complex::operator++(int value)
{
    Complex old_value=*this;
    re+=1;
    return old_value;
}
Complex& Complex::operator++()
{
    re+=1;
    return *this;
}
Complex Complex::operator--(int value)
{
    Complex old_value=*this;
    re-=1;
    return old_value;
}
Complex& Complex::operator--()
{
    re-=1;
    return *this;
}

Complex Complex::operator*(const Complex &a) const
{
    Complex tmp;
    tmp.re=(re*(a.re))-(im*(a.im));
    tmp.im=(re*(a.im))+(im*(a.re));
    return tmp;
}

void Complex::show()
    {
        if(re&&im&&im>0) cout<<re<<"+"<<im<<"i"<<endl;
        if(re&&!im) cout<<re<<endl;
        if(!re&&im) cout<<im<<endl;
        if(re&&im&&im<0) cout<<re<<im<<"i"<<endl;
        if(!re&&!im) cout<<"0"<<endl;
    }

