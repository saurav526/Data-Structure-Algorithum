#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int left = 0;
    int right = size - 1;

    while (left < right) {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    cout << "Reversed array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}