#pragma once
#include"Dog.h"

class DogWithSpots :public Dog
{
	int numberOfSpots;
public:
	DogWithSpots(string name = "", double height = 0, double weight = 0, int age = 0, string color = "", int numberOfSpots=0);
	void printDog(ostream& out = cout) override;
	void readDog(istream& in = cin, ostream& out = cout) override;
};