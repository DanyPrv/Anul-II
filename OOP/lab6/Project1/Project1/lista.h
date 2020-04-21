#pragma once


class Nod;

class Lista
{
	Nod* head;
public:
	Lista();
	~Lista();
	void insert(int val);
	void pop(int val);
	void deleteLessThen(int val);
	float average();
	void print();
};