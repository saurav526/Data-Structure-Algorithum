#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {

    int left = 0;
    int right = height.size() - 1;

    int maximum = 0;

    while (left < right) {

        int width = right - left;

        int h = min(height[left], height[right]);

        maximum = max(maximum, width * h);

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return maximum;
}

int main() {

    vector<int> height = {
        1,8,6,2,5,4,8,3,7
    };

    cout << maxArea(height);

    return 0;
}