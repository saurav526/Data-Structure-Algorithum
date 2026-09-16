#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int x : arr) {
        sum += x;
    }

    cout << "Sum: " << sum;

    return 0;
}