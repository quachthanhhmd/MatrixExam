#pragma once
#include <iostream>
using namespace std;
//---------------------
#define max(a,b) a > b ? a: b



class Matrix {
	int _col, _row;
	float** _matrix;


	float* operator [] (int i) {
		return _matrix[i];
	}

public:
	Matrix();
	Matrix(const Matrix&);
	Matrix(int, int);
	

	//---------
	float Determinant();
	float Calculate(float**, int, int);
	//---------

	//---------
	void Swap(float*&, float*&);
	void EchelonCompactMatrix(int col= 0);
	int Rank();
	//---------

	//-------
	void SystemOfLinearEquations();


	float GetNumArray(int i, int j);
	int GetCol();
	int GetRow();
	float** GetArray();

	

	
	friend ostream& operator <<(ostream&, Matrix&);
	~Matrix();
};