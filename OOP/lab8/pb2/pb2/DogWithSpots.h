#pragma once
#include"Dog.h"

class DogWithSpots :public Dog
{
	int numberOfSpots;
public:
	void setDog(string name, double height, double weight, int age, string color, int numberOfSpots);
	void printDog();
};