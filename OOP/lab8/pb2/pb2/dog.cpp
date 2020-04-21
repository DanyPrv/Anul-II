#include"Dog.h"

Dog::Dog()
{
	this->height = 0;
	this->weight = 0;
	this->age = 0;
}

void Dog::setDog(string name, double height, double weight, int age, string color)
{
	this->dogSetter(name, height, weight, age, color);
}

void Dog::dogSetter(string name, double height, double weight, int age, string color)
{
	this->name = name;
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->color = color;
}

void Dog::dogPrinter()
{
	cout << "Name: " << this->name << '\n';
	cout << "Height: " << this->height << '\n';
	cout << "Weight: " << this->weight << '\n';
	cout << "Age: " << this->age << '\n';
	cout << "Color: " << this->color << '\n';
}

void Dog::printDog()
{
	this->dogPrinter();
}
