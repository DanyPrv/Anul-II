#include"fisier.h"

void remove_comments(char absolutePath[])
{
	char s[101];
	ifstream f;
	f.open("code.txt");
	if (f.is_open())
		cout << "Deschis\n";
	else
		cout << "Inchis\n";
	f >> s;
	cout << s;

	while(f.getline(s,100))
		cout << s;
	



	f.close();
}