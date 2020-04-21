#include<iostream>
#include"lista.h"
using namespace std;

void printMenu()
{
	cout << "Meniu:\n";
	cout << "1. Adaugarea unui element în lista\n";
	cout << "2. Stergerea unui element din lista\n";
	cout << "3. Eliminarea din lista a elementelor sub o valoare data\n";
	cout << "4. Media aritmetica a elementelor\n";
	cout << "5. Afisare Lista\n";
	cout << "0. Iesire\n";
	cout << "Optiunea dumneavoastra: ";
}

int main()
{
	int op,nr;
	Lista L;
	printMenu();
	cin >> op;
	while (true)
	{
		switch (op) 
		{
		case 1:
			cout << "Introduceti numarul: ";
			cin >> nr;
			L.insert(nr);
			break;
		case 2:
			cout << "Introduceti numarul care doriti sa fie sters: ";
			cin >> nr;
			L.pop(nr);
			break;
		case 3:
			cout << "Introduceti valoarea: ";
			cin >> nr;
			L.deleteLessThen(nr);
			break;
		case 4:
			cout << "Media aritmetica este: " << L.average();
			break;
		case 5:
			L.print();
			break;
		case 0:
			return 0;
		default:
			cout << "Optiunea introdusa este invalida\n\n";
		}
		printMenu();
		cin >> op;
	}
}