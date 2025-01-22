#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	int n, m;
	cin >> n;
	int* mine = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> mine[i];
	}
	sort(mine, mine + n);
	cin >> m;
	int* target = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> target[i];
	}

	for (int i = 0; i < m; i++) {
		if (binary_search(mine, mine + n, target[i])) {
			cout << 1 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
	return 0;
}