#include"Elections.h"
Dice::Dice()
{
	ThrowDice();
}
void Dice::ThrowDice()
{
	this->face = 1 + rand() % 6;
}
int Dice::Show()
{
	return this->face;
}
Selection::Selection(int nrVoters, int *votesPerMember)
{
	if (nrVoters <= 0)
	{
		cout << "The number of voters must be strictly positive\n";
		exit(-1);
	}
	this->nrVoters = nrVoters;
	this->votesPerMember = new int[nrVoters];
	for (int i = 0; i < nrVoters; i++)
	{
		if (votesPerMember <= 0)
		{
			cout << "The votes for each member must be strictly positive\n";
			exit(-1);
		}
		this->votesPerMember[i] = votesPerMember[i];
	}
}
Selection::~Selection()
{
	delete[] this->votesPerMember;
}
int Selection::GetChiefOfTribe()
{
	int votes[7] = {};

	for (int i = 0; i < this->nrVoters; i++)
	{
		for (int j = 0; j < this->votesPerMember[i]; j++)
		{
			this->vote.ThrowDice();
			votes[this->vote.Show()]++;
		}
	}

	int MaxV = -1,winner1=0,winner2=0;
	votes[0] = -1;
	for (int i = 1; i <= 6; i++)
	{
		if (votes[i] >= MaxV)
		{
			MaxV = votes[i];
			winner2 = winner1;
			winner1 = i;
		}
		else
		{
			if (votes[i] >= votes[winner2])
			{
				winner2 = i;
			}
		}
	}
	cout << "Tur1:\n";
	for (int i = 1; i <= 6; i++)
		cout << votes[i] << ' ';
	cout << '\n';
	if (MaxV > nrVoters / 2)
		return winner1;
	
	//tour 2
	cout << "Tur 2 inte " << winner1 << " si " << winner2 << '\n'; 
	int nrVotes1 = 0, nrVotes2 = 0;
	for (int i = 0; i < this->nrVoters; i++)
	{
		for (int j = 0; j < this->votesPerMember[i]; j++)
		{
			this->vote.ThrowDice();
			if (this->vote.Show() % 2)
			{
				nrVotes1++;
			}
			else
			{
				nrVotes2++;
			}
		}
	}
	if (nrVotes1 > nrVotes2)
		return winner1;
	return winner2;
}