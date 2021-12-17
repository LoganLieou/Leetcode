#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
int bin_search(const vector<T> arr, T tar) {
	// init low and high values
	int lo = 0;
	int hi = arr.size() - 1;

	// iteritive binary search
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		
		if (arr[mid] > tar) {
			hi = mid - 1;
		}
		else if (arr[mid] < tar) {
			lo = mid + 1;
		}
		else {
			return mid;
		}
	}

	return -1;
}

int main() {
	vector<int> arr = {1, 3, 4, 5, 6, 9};
	int tar = 0;

	cout << "enter value to search: " << endl;
	cin >> tar;
	int i = bin_search(arr, tar);
	cout << i << endl; // expected output: 5
}
