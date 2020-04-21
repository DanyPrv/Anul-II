#include"vector.h"
int main() 
{
	int v1_size, v2_size, v3_size, v4_size;
	float v1[] = { 1,2,4,5,6,19,29 };
	v1_size = 7;
	float v2[] = { 1,3,6,3,1,9,79,18};
	v2_size = 8;
	float v3[] = { 1,3,6,3,1,9,79,18,19,20,21,22,34 };
	v3_size = 13;
	float v4[] = { 1,2,3,2,1,4 };
	v4_size = 6;
	float* v = Add(v3, v3_size, v4, v4_size);
//	show(v, max(v1_size,max(v2_size,v3_size)));
	show(v, 13);
	return 0;
}