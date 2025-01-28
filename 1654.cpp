#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countCables(const vector<long long>& cables, long length) {
	long long count = 0;
	for (auto cable : cables) {
		count += cable / length;
	}
	return count;
}

int main(void) {
	int k, n;
	cin >> k >> n;
	vector<long long> len(k);
	long long maxlen = 0;
	for (int i = 0; i < k; i++) {
		cin >> len[i];
		maxlen = max(maxlen, len[i]);
	}

	long long left = 1;
	long long right = maxlen;
	long long result = 0;
	while (left <= right) {
		long long mid = (left + right) / 2;

		if (countCables(len, mid) >= n) {
			result = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << result;
	return 0;
}