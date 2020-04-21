#include "vector.h"

float* sum(float* v1, int size_v1, float* v2, int size_v2)
{
	int size = max(size_v1, size_v2), i, j,k;
	float* v = new float[size] {};
	for (i = 0; i < size_v1 && i < size_v2; i++)
		v[i] += v1[i] + v2[i];
	k = i;
	for (j = i; j < size_v1; j++,k++)
		v[k] = v1[j];
	for (j = i; j < size_v2; j++,k++)
		v[k] = v2[j];
	return v;
}

float* Add(float* v1, int size_v1, float* v2, int size_v2, float* v3, int size_v3, float* v4, int size_v4)
{
	int size = max(max(size_v1, size_v2), (size_v3, size_v4)) + 1;
	float* v;

	if (size_v3 == 0)
	{
		cout << "Se va face adunarea a 2 vectori";
		v = sum(v1, size_v1, v2, size_v2);
	}
	else if (size_v4 == 0)
	{
		cout << "Se va face adunarea a 3 vectori";
		v = sum(sum(v1,size_v1,v2,size_v2),max(size_v1,size_v2),v3, size_v3);
	}
	else
	{
		cout<<"Se va face adunarea a 4 vectori";
		v = sum(sum(v1, size_v1, v2, size_v2), max(size_v1, size_v2), sum(v3, size_v3, v4, size_v4), max(size_v3, size_v4));
	}
	return v;
}

void show(float v[], int size_v1)
{
	cout << "Print:\n";
	for (int i = 0; i < size_v1; i++)
		cout << v[i] << " ";
	cout << '\n';
}