#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 45, 18};
    int size = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest: " << secondLargest << endl;

    return 0;
}