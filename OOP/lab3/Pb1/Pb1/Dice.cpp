#include"Dice.h"
Dice::Dice()
{
	ThrowDice();
}
void Dice::ThrowDice()
{
	this->face = 1 + rand() % 6;
}
int Dice::show()
{
	return this->face;
}


void perecheMaxAparitii(Dice v[][throws])
{
	int viz[7][7] = {};
	int maxi, maxj, maxV = -1;
	for (int i = 0; i < throws; i++)
	{
		int f0 = v[0][i].show();
		int f1 = v[1][i].show();
		if (f0 != f1)
			viz[f0][f1]++;
		viz[f1][f0]++;
		if (viz[f1][f0] > maxV)
		{
			maxV = viz[f1][f0];
			maxi = f0;
			maxj = f1;
		}
	}
	cout << "perechea {" << maxi << ',' << maxj << "} apare de cele mai multe ori: " << maxV << '\n';
}


void perecheMaxAparitiiCons(Dice v[][throws])
{
	int maxV, maxi, maxj;
	maxV = 1;
	maxi = v[0][0].show();
	maxj = v[1][0].show();
	int nrap = 1;
	for (int i = 1; i < throws; i++)
	{
		if (v[0][i - 1].show() == v[0][i].show() && v[1][i - 1].show() == v[1][i].show() ||
			v[0][i - 1].show() == v[1][i].show() && v[1][i - 1].show() == v[0][i].show())
		{
			nrap++;
		}
		else
		{
			if (nrap > maxV)
			{
				maxV = nrap;
				maxi = v[0][i - 1].show();
				maxj = v[1][i - 1].show();
			}
			nrap = 1;
		}
	}
	cout << "Perechea {" << maxi << "," << maxj << "} apare de cele mai mult ori consecutiv: " << maxV << '\n';
}

void perecheMinAparitii(Dice v[][throws])
{
	int minV, mini, minj;
	int viz[7][7] = {};
	for (int i = 0; i < throws; i++)
	{
		int f0 = v[0][i].show();
		int f1 = v[1][i].show();
		if (f0 != f1)
			viz[f0][f1]++;
		viz[f1][f0]++;
	}
	
	minV = throws + 10;
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
			if (viz[j][i] != 0 && viz[i][j] < minV)
			{
				minV = viz[i][j];
				mini = i;
				minj = j;
			}
	}
	cout << "perechea {" << mini << ',' << minj << "} apare de cele mai putine ori: " << minV << '\n';
}

void aparitiiFete(Dice v[][throws])
{

	int aparitii[7] = {};
	for (int i = 0; i < throws; i++)
	{
		aparitii[v[0][i].show()]++;
		aparitii[v[1][i].show()]++;
	}
	for (int i = 1; i <= 6; i++)
		cout << "face " << i << " apare de " << aparitii[i] << " ori\n";
}