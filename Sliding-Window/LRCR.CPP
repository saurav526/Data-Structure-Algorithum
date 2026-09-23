#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "AABABBA";
    int k = 1;

    int left = 0;
    int maxLength = 0;
    int maxFrequency = 0;

    int frequency[26] = {};

    for (int right = 0; right < s.length(); right++) {

        frequency[s[right] - 'A']++;

        maxFrequency = max(maxFrequency,
                            frequency[s[right] - 'A']);

        while ((right - left + 1) - maxFrequency > k) {

            frequency[s[left] - 'A']--;

            left++;
        }

        maxLength = max(maxLength,
                        right - left + 1);
    }

    cout << "Longest length: " << maxLength;

    return 0;
}