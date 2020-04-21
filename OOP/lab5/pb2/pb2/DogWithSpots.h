#pragma once
#include"Dog.h"

class DogWithSpots :public Dog
{
	int numberOfSpots;
public:
	DogWithSpots(string name = nullptr, double height = 0, double weight = 0, int age = 0, string color = nullptr, int numberOfSpots=0);
	void printDog();
};