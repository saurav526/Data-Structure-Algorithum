#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 25, 7, 45, 18};
    int size = 5;

    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    

    return 0;
}