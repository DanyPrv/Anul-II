#pragma once
#include"lista.h"

class Nod 
{
	int val;
	Nod* next;
public:
	Nod(int val,Nod* next = nullptr);
	friend class Lista;
};