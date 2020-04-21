#pragma once
#include<iostream>
#include"Complex.h"
using namespace std;
template<class T>
class Matrix 
{
	T** mat;
	int size;
public:
	Matrix(int size = 0)
	{
		if (size == 0)
		{
			this->mat = nullptr;
			this->size = 0;
			return;
		}
		this->size = size;
		this->mat = new T * [size];
		for (int i = 0; i < size; i++)
			this->mat[i] = new T[size];
	}
	Matrix(Matrix<T>& obj)
	{
		this->size = obj.size;
		this->mat = new T * [this->size];
		for (int i = 0; i < this->size; i++)
		{
			mat[i] = new T[this->size];
			for (int j = 0; j < this->size; j++)
				this->mat[i][j] = obj.mat[i][j];
		}
	}
	void set(int i, int j, T& value)
	{
		this->mat[i][j] = value;
	}
	~Matrix()
	{
		for (int i = 0; i < size; i++)
			delete[] this->mat[i];
		delete[] this->mat;
	}
	Matrix<T>& operator = (const Matrix<T>& source)
	{
		this->~Matrix();
		this->size = source.size;
		this->mat = new T * [this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->mat[i] = new T[this->size];
			for (int j = 0; j < size; j++)
				this->mat[i][j] = source.mat[i][j];
		}
		return *this;
	}
	friend Matrix<T> operator + (const Matrix<T>x1, const Matrix<T>x2)
	{
		Matrix<T> Snul(0);
		if (x1.size != x2.size)
			return Snul;
		Matrix<T> S(x1.size);
		for (int i = 0; i < x1.size; i++)
			for (int j = 0; j < x1.size; j++)
			{
				S.mat[i][j] = x1.mat[i][j] + x2.mat[i][j];
			}
		return S;
	}
	friend Matrix<T> operator - (const Matrix<T>x1, const Matrix<T>x2)
	{
		if (x1.size != x2.size)
			return Matrix<T>(0);
		Matrix<T> S(x1.size);
		for (int i = 0; i < x1.size; i++)
			for (int j = 0; j < x1.size; j++)
			{
				S.mat[i][j] = x1.mat[i][j] - x2.mat[i][j];
			}
		return Matrix<T>(S);
	}
	friend Matrix<T> operator * (const Matrix<T>x1, const Matrix<T>x2)
	{
		if (x1.size != x2.size)
			return Matrix<T>(0);
		Matrix<T> S(x1.size);
		for (int i = 0; i < x1.size; i++)
			for (int j = 0; j < x1.size; j++)
			{
				T st = 0;
				for (int k = 0; k < x1.size; k++)
				{
					st += x1.mat[i][k] * x2.mat[k][j];
				}
				S.mat[i][j] = st;
			}
		return Matrix<T>(S);
	}
	friend Matrix<T> operator ^ (const Matrix<T>x1, int power)
	{
		Matrix<T> S(x1.size);
		for (int i = 1; i < power; i++)
		{
			S = S * x1;
		}
		return Matrix<T>(S);
	}
	friend ostream& operator <<(ostream& out, const Matrix<T> M)
	{
		out << "Size: " << M.size << endl;;
		for (int i = 0; i < M.size; i++)
		{
			for (int j = 0; j < M.size; j++)
			{
				out << M.mat[i][j] << ' ';
			}
			out << "\n";
		}
		out << '\n';
		return out;
	}
	friend istream& operator >>(istream& in,Matrix<T>& M)
	{
		M.~Matrix();
		std::cout << "Size: ";
		int n;
		in >> n;
		M = Matrix(n);
		for (int i = 0; i < M.size; i++)
		{
			for (int j = 0; j < M.size; j++)
			{
				in >> M.mat[i][j];
			}
		}
		return in;
	}
};