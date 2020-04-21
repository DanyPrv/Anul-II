#include"DogWithSpots.h"


DogWithSpots::DogWithSpots(string name, double height, double weight, int age, string color, int numberOfSpots)
	:Dog(name,height,weight,age,color)
{
	this->numberOfSpots = numberOfSpots;
}

void DogWithSpots::printDog()
	:printDog()
{
	cout << "Number of spots: " << this->numberOfSpots << '\n';
}
