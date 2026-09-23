#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcabcbb";

    int left = 0;
    int maxLength = 0;

    int lastSeen[256] = {};

    for (int right = 0; right < s.length(); right++) {

        left = max(left, lastSeen[s[right]]);

        maxLength = max(maxLength, right - left + 1);

        lastSeen[s[right]] = right + 1;
    }

    cout << "Longest length: " << maxLength;

    return 0;
}