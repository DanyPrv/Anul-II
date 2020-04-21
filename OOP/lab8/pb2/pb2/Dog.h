#pragma once
#include<iostream>
using namespace std;


class Dog 
{
protected:
	double height;
	double weight;
	int age;
	string name;
	string color;
	void dogSetter(string name, double height, double weight, int age, string color);
	void dogPrinter();
public:
	Dog();
	void setDog(string name, double height, double weight, int age, string color);
	void printDog();
};
