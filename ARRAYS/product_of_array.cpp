#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    vector<int> result(n, 1);

    int prefix = 1;

    for (int i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= arr[i];
    }

    int suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;
        suffix *= arr[i];
    }

    cout << "Product array: ";

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}