#include <iostream>
#include "Complex2.h"

using namespace std;

int main()
{
    Complex a(5,3),c;
    Complex b(2,3);
    c=a+b;
    c.show();
    c++;
    c.show();
    ++c;
    c.show();
    c--;
    c.show();
    --c;
    c.show();
    c=a*a;
    c.show();
    cout<<c;


    return 0;
}
