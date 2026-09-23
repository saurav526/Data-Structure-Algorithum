#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    int windowSum = 0;

    // Calculate sum of first window
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < arr.size(); i++) {

        windowSum += arr[i];
        windowSum -= arr[i - k];

        maxSum = max(maxSum, windowSum);
    }

    cout << "Maximum sum of subarray of size K: " << maxSum;

    return 0;
}