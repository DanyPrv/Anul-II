#include "ireal.h"
ireal impartire(ireal x, ireal y){
    ireal z;
    z.re=(x.re*y.re+x.im*y.im)/(y.re*y.re+y.im*y.im);
    z.im=(y.re*x.im-x.re*y.im)/(y.re*y.re+y.im*y.im);
    return z;
}

void afisare(ireal z){
    if(z.im<0)
        printf("%.3f%.3fi",z.re,z.im);
    else
        printf("%.3f+%.3fi",z.re,z.im);
}

ireal suma(ireal a, ireal b)
{
    ireal c;
    c.re=a.re+b.re;
    c.im=a.im+b.im;
    return c;
}

ireal diferenta(ireal a, ireal b)
{
    ireal c;
    c.re=a.re-b.re;
    c.im=a.im-b.im;
    return c;
}
