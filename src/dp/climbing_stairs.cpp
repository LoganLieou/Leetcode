#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int climbing_stairs(int n) {
    if (n < 2) return 1;
    int last = 1, llast = 1;
    for (int i = 2; i <= n; i++) {
        int temp = last;
        last = last + llast;
        llast = temp;
    }
    return last;
}

int main() {
    cout << climbing_stairs(5) << endl;
}
