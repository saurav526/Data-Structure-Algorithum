#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = (double)sum / size;

    cout << "Average: " << average;

    return 0;
}