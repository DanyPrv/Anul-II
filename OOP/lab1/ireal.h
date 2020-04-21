#include <stdio.h>
#include <stdlib.h>
typedef struct ireal
{
    float re;
    float im;
}ireal;

ireal impartire(ireal x, ireal y);
void afisare(ireal x);
ireal suma(ireal a, ireal b);
ireal diferenta(ireal a, ireal b);

