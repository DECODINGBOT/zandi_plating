#include <iostream>
using namespace std;

int n, m, k;

int main(void) {
	int **A, **B, **mat;
	cin >> n >> m;
	A = new int* [n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	cin >> m >> k;
	B = new int* [m];
	for (int i = 0; i <m; i++) {
		B[i] = new int[k];
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> B[i][j];
		}
	}

	mat = new int* [n];
	for (int i = 0; i < n; i++) {
		mat[i] = new int[k];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			mat[i][j] = 0;
			for (int l = 0; l < m; l++) {
				mat[i][j] += A[i][l] * B[l][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;

	for (int i = 0; i < m; i++) {
		delete[] B[i];
	}
	delete[] B;

	for (int i = 0; i < n; i++) {
		delete[] mat[i];
	}
	delete[] mat;
	return 0;
}