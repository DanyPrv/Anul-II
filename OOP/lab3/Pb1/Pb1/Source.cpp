#include"Dice.h"
int main()
{
	srand(time(nullptr));
	Dice v[2][throws];

	perecheMaxAparitii(v);
	perecheMaxAparitiiCons(v);
	perecheMinAparitii(v);
	aparitiiFete(v);
	/*for (int i = 0; i < throws; i++)
		cout << v[0][i].show() << ' ' << v[1][i].show() << '\n';
	*/
	return 0;
}