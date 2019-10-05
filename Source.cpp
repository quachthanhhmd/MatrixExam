#include "Matrix.h"

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	Matrix a(n, m);
	
	//cout << a.Determinant() << "\n";
	
	//a.EchelonCompactMatrix();

	//cout << a;

	//cout << a.Rank();
	a.SystemOfLinearEquations();
	
	
	return 0;
}

