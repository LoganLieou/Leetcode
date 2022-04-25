#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string longest_palindrome(string s) {
    int l = 0, r = (int)s.size() - 1;

    // check if string is palindrome
    auto is_palindrome = [&](string t) -> bool {
        string temp = t;
        reverse(temp.begin(), temp.end());
        return t == temp;
    };

    while (l < r) {
        string temp = s.substr(l, r - l + 1);
        if (is_palindrome(temp)) {
            return temp;
        }
    }
    return "";
}

int main() {

}
