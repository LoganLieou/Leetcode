#include <iostream>

using namespace std;

int getSum(int a, int b) {
	int sum = 0;
	if (a ^ b) {
		return a ^ b;
	} else {
		while (b) {
			int diff = a ^ b, carry = (unsigned)(a & b) << 1;
		}
	}
}

int main() {
	int a = 7;
	int b = 3;
	cout << getSum(a, b) << endl;
}
