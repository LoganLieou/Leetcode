#include <bits/stdc++.h>
#define N size
#define pb push_back
#define l int
#define vi vector<l>

using namespace std;

vector<vi> threeSum(vi ns) {
	vector<vi> res;
	sort(ns.begin(), ns.end());

	for (l i = 0; i < ns.N() - 2; i++) {
		// check for duplicates
		if (i > 0 && ns[i] == ns[i - 1]) continue;

		l lp = i + 1, rp = ns.N() - 1;
		while (lp < rp) {
			// the sum of these 3 values
			l sum = ns[i] + ns[lp] + ns[rp];
			if (sum > 0) {
				// if pos we want to dec the value
				// nudging it towards zero
				rp--;
			}
			else if (sum < 0) {
				// if neg, then we want to inc the value
				lp++;
			}
			else {
				// push back in the case that it's zero
				res.pb({ns[i], ns[lp], ns[rp]});

				// duplicate checking
				while (lp < rp && ns[lp] == ns[lp-1]) lp++;
				while (lp < rp && ns[rp] == ns[rp-1]) rp--;
				lp++; rp--;
			}
		}
	}
	return res;
}

int main() {
}
