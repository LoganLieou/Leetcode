#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bfindMin(vector<int> &nums) {
    // the bad solution this takes O(n) we want to do this in O(log(n)) time
    int min = INT_MAX;
    for (int num : nums) {
        if (num < min) {
            min = num;
        }
    }
    return min;
}

// iterative binary search
int binary_search(vector<int> arr, int tar) {
    int lo = 0, hi = arr.size();
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] > tar) {
            hi = mid - 1;
        } else if (arr[mid] < tar) {
            lo = mid + 1;
        } else if (arr[mid] == tar) {
            return mid;
        }
    }
    return -1;
}

int findMin(vector<int> &nums) {
    int lo = 0, hi = nums.size(), mid = 0;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (nums[mid - 1] > nums[mid] && nums[mid + 1] < nums[mid]) {
            lo = mid + 1;
        } else if (nums[mid] > nums[mid + 1] && nums[mid] < nums[mid - 1]) {
            hi = mid - 1;
        }
    }
    return mid;
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    cout << findMin(nums) << endl;
}
