#include <iostream>
using namespace std;

int main(void) {
	int n, m, **arr, x1, x2, y1, y2;
	int sum;
	cin >> n >> m;
	arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for(int i = 0; i < m; i++) {
		sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1 - 1; j < x2; j++) {
			for (int k = y1 - 1; k < y2; k++) {
				sum += arr[j][k];
			}
		}
		cout << sum << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}