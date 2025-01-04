#include <iostream>
using namespace std;

int main(void) {
	unsigned int a, b, v, day;
	cin >> a >> b >> v;
	//int quotient = v / (a - b);
	//int remainder = v % (a - b);
	if ((v - a) % (a - b) == 0) {
		day = (v - a) / (a - b) + 1;
	}
	else {
		day = (v - a) / (a - b) + 2;
	}
	cout << day << endl;
	return 0;
}

/*
(a - b) * x + a >= v
x >= (v - a) / (a - b)


2 1 5
(2 - 1) + (2 - 1) + (2 - 1) + 2 = 5

3 2 6
(3 - 2) + (3 - 2) + (3 - 2) + 3 = 6

4 2 6
(4 - 2) + 4 = 6

5 1 6
(5 - 1) + 5 = 10 > 6
*/