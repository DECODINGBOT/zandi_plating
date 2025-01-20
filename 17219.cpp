#include <iostream>
#include <map>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	string* target = new string[m];
	map<string, string> temp;

	for (int i = 0; i < n; i++) {
		string key, value;
		cin >> key >> value;
		temp.insert(make_pair(key, value));
	}

	for (int i = 0; i < m; i++) {
		string address;
		cin >> address;
		target[i] = temp.find(address)->second;
	}
	for (int i = 0; i < m; i++) {
		cout << target[i] << endl;
	}
	return 0;
}