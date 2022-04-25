#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int robHouses(vector<int> houses) {
    int rob1 = 0, rob2 = 0;
    for (int h : houses) {
        int temp = max(h + rob1, rob2);
        rob1 = rob2;
        rob2 = temp;
    }
    return rob2;
}

int main() {

}
