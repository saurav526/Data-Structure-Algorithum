#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    int k = 4;

    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < arr.size(); i++) {
        windowSum += arr[i];
        windowSum -= arr[i - k];

        maxSum = max(maxSum, windowSum);
    }

    double maxAverage = (double)maxSum / k;

    cout << "Maximum average: " << maxAverage;

    return 0;
}