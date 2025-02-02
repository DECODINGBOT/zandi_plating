#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 1000001;

int main(void) {
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	long long* factors = new long long[1000001];
	memset(factors, 0, sizeof(factors));
	int t;
	cin >> t;

	for (long long i = 1; i <= SIZE; i++) {
		for (long long j = 1; i * j <= SIZE; j++) {
			factors[i * j] += i;
		}
		factors[i] += factors[i - 1];
	}

	while (t > 0) {
		long long n;
		cin >> n;
		cout << factors[n] << "\n";
		t--;
	}
	return 0;
}