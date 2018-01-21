#include "complex.h"

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.re;
    if( c.im > 0 )
        out << "+";
    out << c.im << "i";
 
    return out;
}
 
istream &operator>>(istream &in, const Complex &c)
{
    in >> c.re >> c.im;
 
    return in;
}