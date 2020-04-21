#include"Dog.h"

Dog::Dog(string name, double height, double weight, int age, string color)
{
	this->name = name;
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->color = color;
}

void Dog::printDog(ostream& out)
{
	out << "Name: " << this->name << '\n';
	out << "Height: " << this->height << '\n';
	out << "Weight: " << this->weight << '\n';
	out << "Age: " << this->age << '\n';
	out << "Color: " << this->color << '\n';
}


void Dog::readDog(istream& in, ostream& out)
{
	out << "Dog name: ";
	in >> this->name;
	out << "Dog height: ";
	in >> this->height;
	out << "Dog weight: ";
	in >> this->weight;
	out << "Dog age: ";
	in >> this->age;
	out << "Dog color: ";
	in >> this->color;
}