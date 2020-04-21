#include"matrix.h"
/*
template<class T>
Matrix<T>::Matrix(int size)
{
	if (size == 0)
	{
		this->mat = nullptr;
		this->size = 0;
		return;
	}
	this->size = size;
	this->mat = new T* [size];
	for(int i=0;i<size;i++)
		this->mat[i]=new T [size]; 
}

template<class T>
Matrix<T>::Matrix(Matrix<T>& obj)
{
	this->size = obj->size;
	this->mat = new T * [this->size];
	for (int i = 0; i < this->size; i++)
	{
		mat[i] = new T[this->size];
		for (int j = 0; j < this->size; j++)
			this->mat[i][j] = obj->mat[i][j];
	}
}

template<class T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < size; i++)
		delete[] this->mat[i];
	delete[] this->mat;
}

template<class T>
Matrix<T>& Matrix<T>::operator=(const Matrix<T>& source)
{
	this->~Matrix();
	this->size = source->size;
	this->mat = new T * [this->size];
	for (int i = 0; i < this->size; i++)
	{
		this->mat[i] = new T [this->size];
		for (int j = 0; j < size; j++)
			this->mat[i][j] = source->mat[i][j];
	}
}

template<class T>
Matrix<T> operator + (const Matrix<T>x1, const Matrix<T>x2)
{
	if (x1->size != x2->size)
		return Matrix<T>(0);
	Matrix<T> S(x1->size);
	for (int i = 0; i < x1->size; i++)
		for (int j = 0; j < x1->size; j++)
		{
			S->mat[i][j] = x1->mat[i][j] + x2->mat[i][j];
		}
	return Matrix<T>(S);
}

template<class T>
Matrix<T> operator - (const Matrix<T>x1, const Matrix<T>x2)
{
	if (x1->size != x2->size)
		return Matrix<T>(0);
	Matrix<T> S(x1->size);
	for (int i = 0; i < x1->size; i++)
		for (int j = 0; j < x1->size; j++)
		{
			S->mat[i][j] = x1->mat[i][j] - x2->mat[i][j];
		}
	return Matrix<T>(S);
}

template<class T>
Matrix<T> operator * (const Matrix<T>x1, const Matrix<T>x2)
{
	if (x1->size != x2->size)
		return Matrix<T>(0);
	Matrix<T> S(x1->size);
	for (int i = 0; i < x1->size; i++)
		for (int j = 0; j < x1->size; j++)
		{
			T st = 0;
			for (int k = 0; k < x1->size; k++)
			{
				st += x1->mat[i][k] * x2->mat[k][j];
			}
			S->mat[i][j] = st;
		}
	return Matrix<T>(S);
}

template<class T>
Matrix<T> operator ^ (const Matrix<T>x1, int power)
{
	Matrix<T> S(x1->size);
	for (int i = 1; i < power; i++)
	{
		S = S * x1;
	}
	return Matrix<T>(S);
}

template<class T>
void Matrix<T>::set(int i, int j, T val)
{
	this->mat[i][j] = val;
}

template<class T>
ostream& operator <<(ostream& out, const Matrix<T> M)
{
	for (int i = 0; i < M->size; i++)
	{
		for (int j = 0; j < M->size; j++)
		{
			out << M->mat[i][j] << ' ';
		}
		out << '\n\n';
	}
}
*/