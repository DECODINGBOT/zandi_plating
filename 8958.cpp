#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	int cnt;
	int* score;
	string answer;
	cin >> n;
	score = new int[n];
	for (int i = 0; i < n; i++) {
		cnt = 0;
		score[i] = 0;
		cin >> answer;
		for (char ch : answer) {
			if (ch == 'O') {
				cnt++;
				score[i] += cnt;
			}
			else {
				cnt = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << score[i] << endl;
	}
	delete[] score;
	return 0;
}