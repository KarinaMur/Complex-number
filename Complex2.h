#ifndef COMPLEX2_H_INCLUDED
#define COMPLEX2_H_INCLUDED

class Complex
{
private:
    double re;
    double im;
public:
    Complex();
    Complex(double re,double im);

    ~Complex(){}

    double get_re();
    double get_im();

    void set_re(double);
    void set_im(double);

    Complex sum(const Complex&) const;
    Complex sub(const Complex&) const;
    Complex mul(const Complex&) const;
    Complex div(const Complex&) const;

    Complex operator+(const Complex&) const;
    Complex operator-(const Complex &) const;
    Complex operator++(int);
    Complex& operator++();
    Complex operator--(int value);
    Complex& operator--();
    Complex operator*(const Complex &) const;
    void operator<<(const Complex);

    void show();
} ;


#endif // COMPLEX2_H_INCLUDED
