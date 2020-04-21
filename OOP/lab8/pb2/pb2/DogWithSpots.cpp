#include"DogWithSpots.h"


void DogWithSpots::setDog(string name, double height, double weight, int age, string color, int numberOfSpots)
{
	this->dogSetter(name, height, weight, age, color);
	this->numberOfSpots = numberOfSpots;
}

void DogWithSpots::printDog()
{
	this->dogPrinter();
	cout << "Number of spots: " << this->numberOfSpots << '\n';
}
