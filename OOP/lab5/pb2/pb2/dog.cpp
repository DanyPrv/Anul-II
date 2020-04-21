#include"Dog.h"

Dog::Dog(string name, double height, double weight, int age, string color)
{
	this->name = name;
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->color = color;
}

void Dog::printDog()
{
	cout << "Name: " << this->name << '\n';
	cout << "Height: " << this->height << '\n';
	cout << "Weight: " << this->weight << '\n';
	cout << "Age: " << this->age << '\n';
	cout << "Color: " << this->color << '\n';
}
