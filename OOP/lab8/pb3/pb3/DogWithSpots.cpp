#include"DogWithSpots.h"


DogWithSpots::DogWithSpots(string name, double height, double weight, int age, string color, int numberOfSpots)
	:Dog(name, height, weight, age, color)
{
	this->numberOfSpots = numberOfSpots;
}

void DogWithSpots::printDog(ostream& out)
{
	out << "Name: " << this->name << '\n';
	out << "Height: " << this->height << '\n';
	out << "Weight: " << this->weight << '\n';
	out << "Age: " << this->age << '\n';
	out << "Color: " << this->color << '\n';
	out << "Number of spots: " << this->numberOfSpots << '\n';
}

void DogWithSpots::readDog(istream& in, ostream& out)
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
	out << "Number of sposts: ";
	in >> this->numberOfSpots;
}