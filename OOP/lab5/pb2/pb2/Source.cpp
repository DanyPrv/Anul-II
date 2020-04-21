#include<iostream>
#include"Dog.h"
#include"DogWithSpots.h"
#include"DogWithoutSpots.h"
using namespace std;
int  main()
{
	Dog dog1("Ursu", 3.2, 5.3, 4, "broascaasdadswn");
	DogWithSpots dog2("Rex", 1.2, 12.3, 2, "blacks", 12);
	DogWithoutSpots dog3("Pufi", 0.6, 4, 1, "whasdasdasdadasdite");

	dog1.printDog();
	cout << endl;

	dog2.printDog();
	cout << endl;

	dog3.printDog();
	cout << endl;

	return 0;
}