#include"Complex.h"

Complex::Complex()
{
	this->re = this->im = 0;
}

Complex::Complex(float re)
{
	this->re = re;
	this->im = 0;
}

Complex::Complex(float re, float im)
{
	this->re = re;
	this->im = im;
}

Complex Complex::operator +(Complex& a)
{
	return Complex(this->re + a.re, this->im + a.im);
}

Complex Complex::operator -(Complex& a)
{
	return Complex(this->re - a.re, this->im - a.im);
}

Complex Complex::operator *(Complex& a)
{
	return Complex(this->re * a.re - this->im * a.im, this->re * a.im + this->im * a.re);
}

Complex& Complex::operator=(Complex a)
{
	this->re = a.re;
	this->im = a.im;
	return *this;
}

float Complex::operator~() {
	return (float)sqrt(this->im * this->im + this->re * this->re);
}

Complex& Complex::operator ^(float p)
{

	Complex a = *this;
	float x, y;
	for (float i = 1; i < p; i++)
	{
		a = (*this) *  a;
	}
	x = a.re;
	y = a.im;
	return a;
}

ostream& operator<<(ostream& out, const Complex c)
{
		out << fixed;
	out <<setprecision(3)<< c.re;
	if (c.im >= 0)
		out<< "+";
	out <<setprecision(3)<< c.im << "i\n";
	return out;
}

Complex Complex::operator /(Complex a)
{
	return Complex((this->re * a.re + this->im * a.im) / (a.re * a.re + a.im * a.im), 
				   (a.re * this->im - this->re * a.im) / (a.re * a.re + a.im * a.im));
}


Complex& Complex::operator +=(Complex& a)
{
	this->re = this->re + a.re;
	this->im = this->im + a.im;
	return *this;
}