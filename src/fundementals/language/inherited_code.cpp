/*
 * Compiler: Clang
 * Author:   Logan Jackson
 * 
 * Pourpose:
 * 	You inherit a piece of code from your company
 * that preforms input validation. It works reasonably
 * well but it throws an exception when the username is
 * too short. Upon review, you realize that no one ever
 * defined the exception.
 *
 * 	Your goal is to handle that exception and print out
 * "Too short: n" where n is the length of the username
 * when the exception occurs.
 *
 */

#include <cmath>
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

// define the exception here called BadLengthException:
class BadLengthException {
	private:
		int val;
	public:
		BadLengthException(int n): val(n) {}
		int what() {
			return val;
		}
};

// extra code given
bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}
