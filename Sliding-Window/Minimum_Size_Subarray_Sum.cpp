#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target = 7;

    int left = 0;
    int sum = 0;
    int minLength = INT_MAX;

    for (int right = 0; right < arr.size(); right++) {

        sum += arr[right];

        while (sum >= target) {
            minLength = min(minLength, right - left + 1);

            sum -= arr[left];
            left++;
        }
    }

    if (minLength == INT_MAX)
        cout << "No valid subarray";
    else
        cout << "Minimum length: " << minLength;

    return 0;
}