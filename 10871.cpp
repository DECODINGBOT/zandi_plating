#include <iostream>
using namespace std;

int main(void) {
	int n, x;
	int* arr;
	cin >> n >> x;
	arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < x) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	delete[] arr;
	return 0;
}