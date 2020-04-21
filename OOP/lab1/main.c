#include "ireal.h"
int main()
{
    ireal x,y,z;
    x.re=3;
    x.im=4;
    y.re=3;
    y.im=4;
    z=impartire(x,y);
    afisare(z);
    return 0;
}
