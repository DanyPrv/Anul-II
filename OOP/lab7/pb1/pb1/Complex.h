#pragma once
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Complex 
{
	float re;
	float im;
public:
	Complex();
	Complex(float re);
	Complex(float re,float im);
	Complex operator +(Complex& a);
	Complex operator -(Complex& a);
	Complex operator *(Complex& a);
	Complex& operator =(Complex a);
	Complex& operator +=(Complex& a);
	float operator ~();
	Complex& operator ^(float p);
	Complex operator /(Complex a);
	friend ostream& operator << (ostream& out, const Complex c);
	
};