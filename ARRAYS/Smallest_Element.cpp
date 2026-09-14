#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 45, 18};
    int size = 5;

    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;

    return 0;
}