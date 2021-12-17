#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int bruteForce(vector<int> & prices) {
	int maxprofit = 0;
	for (int i = 0; i < prices.size(); i++) {
		for (int j = i + 1; j < prices.size(); j++) {
			int profit = prices[j] - prices[i];
			if (profit > maxprofit) {
				maxprofit = profit;
			}
		}
	}
	return maxprofit;
}

int maxProfit(vector<int> & prices) {
	int minprice = INT_MAX;
	int maxprofit = 0;
	for (int i = 0; i < prices.size(); i++) {
		if (prices[i] < minprice) {
			prices[i] = minprice;
		} else if (prices[i] - minprice > maxprofit) {
			maxprofit = (prices[i] - minprice);
		}
	}
	return maxprofit;
}

int main() {
	vector<int> arr = {1, 3, 1, 4, 5, 9, 2, 10, 7}; // max profit is 9
	cout << bruteForce(arr) << endl;
}
