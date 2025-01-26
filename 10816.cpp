#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	unordered_map<int, int> count;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		count[temp]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		cout << count[temp] << " ";
	}
	return 0;
}