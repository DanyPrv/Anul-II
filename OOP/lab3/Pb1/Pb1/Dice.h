#pragma once
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


#define throws 9000

class Dice 
{
	int face;
public:
	Dice();
	void ThrowDice();
	int show();
};
void perecheMaxAparitii(Dice v[][throws]);
void perecheMaxAparitiiCons(Dice v[][throws]);
void perecheMinAparitii(Dice v[][throws]);
void aparitiiFete(Dice v[][throws]);