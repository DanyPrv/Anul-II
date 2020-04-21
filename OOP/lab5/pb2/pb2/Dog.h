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
public:
	Dog(string name=nullptr, double height=0, double weight=0, int age=0, string color=nullptr);
	virtual void printDog();
};
