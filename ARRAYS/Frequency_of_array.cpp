#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {2, 5, 2, 8, 2, 10, 2};
    int size = 7;

    int target = 2;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i]   == target) {
            count++;
        }
    }

    cout << "Frequency of " << target << ": " << count<< endl  ;

    return 0;
}