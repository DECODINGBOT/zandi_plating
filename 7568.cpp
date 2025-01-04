#include <iostream>
using namespace std;

int main(void) {
	int n, **arr, *rank;
	cin >> n;
	arr = new int*[n];
	rank = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[2];
	}
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < n; i++) {
		rank[i] = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}