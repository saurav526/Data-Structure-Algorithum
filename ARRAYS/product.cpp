#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    vector<int> prefix(n);
    vector<int> suffix(n);
    vector<int> answer(n);

    prefix[0] = 1;

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    suffix[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    cout << "Prefix: ";
    for (int x : prefix)
        cout << x << " ";

    cout << "\nSuffix: ";
    for (int x : suffix)
        cout << x << " ";

    cout << "\nAnswer: ";
    for (int x : answer)
        cout << x << " ";

    return 0;
}