#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int j = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}