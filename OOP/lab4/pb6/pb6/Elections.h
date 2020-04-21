#pragma once
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

class Dice
{
	int face;
public:
	Dice();
	void ThrowDice();
	int Show();
};

class Selection
{
	Dice vote;
	int nrVoters;
	int* votesPerMember;
public:
	Selection(int nrVoters, int *votesPerMember);
	~Selection();
	int GetChiefOfTribe();
};
