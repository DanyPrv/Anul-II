#include"Elections.h"
#define MEMBERS 100 
#define MAXV 4
int main()
{
	srand(time(nullptr));
	int* v;
	v = new int[MEMBERS];
	for (int i = 0; i < MEMBERS; i++)
	{
		v[i] = 1 + rand() % MAXV;
	}
	Selection Election(MEMBERS, v);
	cout << "Final: " << Election.GetChiefOfTribe() << '\n';
	delete[] v;
	return 0;
}