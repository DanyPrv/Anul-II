#include<iostream>
#include"Dog.h"
#include"DogWithSpots.h"
#include"DogWithoutSpots.h"
using namespace std;

int  main()
{
	Dog dog1;
	DogWithSpots dog2;
	DogWithoutSpots dog3;

	dog1.readDog();
	dog2.readDog();
	dog3.readDog();

	dog1.printDog();
	cout << endl;

	dog2.printDog();
	cout << endl;

	dog3.printDog();
	cout << endl;
	return 0;
}