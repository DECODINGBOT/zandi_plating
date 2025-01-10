#include <iostream>
using namespace std;

int main(void) {
	string str;
	char a;
	int l, r, q;
	cin >> str;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int cnt = 0;
		cin >> a >> l >> r;
		for (int j = l; j < r + 1; j++) {
			if (a == str[j]) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}