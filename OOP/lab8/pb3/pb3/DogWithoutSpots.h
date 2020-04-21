#pragma once
#include"Dog.h"


class DogWithoutSpots : public Dog
{
public:
	DogWithoutSpots(string name = "", double height = 0, double weight = 0, int age = 0, string color = "");
};