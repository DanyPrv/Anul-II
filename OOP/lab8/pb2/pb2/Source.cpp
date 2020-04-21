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

	dog1.setDog("Ursu", 3.2, 5.3, 4, "brown");
	dog1.printDog();
	cout << endl;

	dog2.setDog("Rex", 1.2, 12.3, 2, "black", 12);
	dog2.printDog();
	cout << endl;

	dog3.setDog("Pufi", 0.6, 4, 1, "white");
	dog3.printDog();
	cout << endl;

	return 0;
}