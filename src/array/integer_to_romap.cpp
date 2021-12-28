#include "../../bits/stdc++.h"

string integerToRoman(int num) {
	unordered_map<int, char> alphanum;
	string s = "";

	alphanum[1] = "I";
	alphanum[2] = "II";
	alphanum[3] = "III";
	alphanum[4] = "IV";
	alphanum[5] = "V";
	alphanum[10] = "X";
	alphanum[50] = "L";
	alphanum[100] = "C";

	if (num > 10) {
		int firstPos = num % 10;
	}
	return s;
}

int main() {
}
