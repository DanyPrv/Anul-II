#include<iostream>
#include <stdlib.h>
#include <time.h>   
#include"Complex.h"
using namespace std;
#define N 3
int main()
{
	srand(time(NULL));
	Complex* v;
	Complex a, b;
	v = new Complex[2*N+2];
	for (int i = 1; i <= 2*N+1; i++)
		v[i] = Complex((float)(rand()%6), (float)(rand() % 6));
	for (int i = 1; i <= 2*N-1; i+=2)
	{
		Complex c = (v[i] ^ 3);
		a= a+c;
	}

	for (int i = 2; i <= 2*N; i+=2)
	{
		Complex c = (v[i] ^ 3);
		b=b+c;
	}
	Complex c(1,1);
	c += a;
	cout << c << a;
	cout << a/b;
	return 0;
}