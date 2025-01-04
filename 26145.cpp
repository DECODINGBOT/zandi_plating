#include <iostream>
using namespace std;

int main(void) {
	unsigned int n, m, *s, **t, *total;
	cin >> n >> m;
	s = new unsigned int[n];
	t = new unsigned int*[n];
	total = new unsigned int[n + m];
	for (int i = 0; i < n; i++) {
		t[i] = new unsigned int[n + m];
	}
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n + m; j++) {
			cin >> t[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		total[i] = s[i];
		for (int j = 0; j < n + m; j++) {
			total[i] -= t[i][j];
		}
		for (int k = 0; k < n; k++) {
			total[i] += t[k][i];
		}
	}
	for (int i = n; i < n + m; i++) {
		total[i] = 0;
		for (int j = 0; j < n; j++) {
			total[i] += t[j][i];
		}
	}

	for (int i = 0; i < n + m; i++) {
		cout << total[i] << " ";
	}
	cout << endl;

	delete[] s;
	for (int i = 0; i < n; i++) {
		delete[] t[i];
	}
	delete[] t;
	return 0;
}