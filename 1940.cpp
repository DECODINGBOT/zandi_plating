#include <iostream>
using namespace std;

int main(void) {
	int n, m, *num, **cases, cnt = 0;
	cin >> n;
	cin >> m;
	num = new int[15001];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (num[i] + num[j] == m) {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}