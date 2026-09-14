#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    bool sorted = true;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl   ;

    return 0;
}