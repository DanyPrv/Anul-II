#include "lista.h"
#include "nod.h"
#include<iostream>
using namespace std;

Lista::Lista()
{
	this->head = nullptr;
}

void Lista::insert(int val)
{
	if (this->head == nullptr)
	{
		this->head = new Nod(val);
		return;
	}
	
	Nod* ptr = head;
	while (ptr->next != nullptr)
		ptr = ptr->next;

	ptr->next = new Nod(val);
}

void Lista::pop(int val)
{
	if (head == nullptr)
		return ;
	if (head->val == val)
	{
		Nod* aux = head;
		head = head->next;
		delete aux;
		return ;
	}
	Nod* prev = this->head;
	Nod* ptr = this->head->next;
	while (ptr != nullptr && ptr->val != val)
	{
		prev = ptr;
		ptr = ptr->next;
	}

	if (ptr != nullptr)
	{
		prev->next = ptr->next;
		delete ptr;
		return ;
	}
}

void Lista::deleteLessThen(int val)
{
	if (this->head == nullptr)
	{
		return;
	}

	if (this->head->val < val)
	{
		Nod* aux = this->head;
		this->head = this->head->next;
		delete aux;
		deleteLessThen(val);
		return;
	}

	Nod* prev = this->head;
	Nod* ptr = this->head->next;
	
	while (ptr != nullptr)
	{
		if (ptr->val < val)
		{
			prev->next = ptr->next;
			delete ptr;
			ptr = prev;
		}
		prev = ptr;
		ptr = ptr->next;
	}
}

float Lista::average()
{
	if (this->head == nullptr)
		return 0;
	int nr = 0;
	float s = 0;
	Nod* ptr = this->head;
	while (ptr != nullptr)
	{
		s += ptr->val;
		nr++;
		ptr = ptr->next;
	}
	return s / nr;
}

void Lista::print()
{
	if (this->head == nullptr)
	{
		cout << "Lista Vida\n";
		return;
	}
	cout << "Elementele listei:\n";
	Nod* ptr = this->head;
	while (ptr != nullptr)
	{
		cout<<ptr->val<<' ';
		ptr = ptr->next;
	}
	cout << '\n';
}

Lista::~Lista()
{
	Nod* ptr = this->head;
	while (head!=nullptr)
	{
		ptr = head;
		head = head->next;
		delete ptr;
	}
}