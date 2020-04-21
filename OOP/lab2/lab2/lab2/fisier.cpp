#include"fisier.h"

void remove_comments(char* nume)
{
	ifstream f;
	f.open(nume);
	char line[100];
	while (!f.eof()) {
		getline(f, line, '\n');
	}
}