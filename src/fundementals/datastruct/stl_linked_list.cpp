#include <iostream>
#include <list>

using namespace std;

int main() {
	// init the list
	list<int> l;

	// push values to the list
	l.push_back(4);
	l.push_back(3);
	l.push_back(2);
	l.push_back(1);

	// output the list
	while (l.empty() == false) {
		cout << l.front() << endl;
		l.pop_front();
	}
}

