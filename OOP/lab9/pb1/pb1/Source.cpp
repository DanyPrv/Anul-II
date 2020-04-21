#include"matrix.h"
#include"Complex.h"
int main()
{
	/*Matrix<int>M1(4);
	Matrix<int>M2;
	Matrix<int>M3;
	cin >> M2>>M3;
	Matrix<int>M5;
	M5= (M2 + M3);
	cout << M5;
	*/
	Matrix<Complex>M1;
	Matrix<Complex>M2;
	cin >> M1 >> M2;
	Matrix<Complex> temp;
	
	temp = (M1 + M2);
	cout << temp;
	return 0;
}