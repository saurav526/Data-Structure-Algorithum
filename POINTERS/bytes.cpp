#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array

    cout << "Address of first element: " << ptr << endl;
    cout << "Value at that address: " << *ptr << endl;
    cout << *(ptr + 1) << endl; // Accessing the second element using pointer arithmetic
    cout << *(ptr + 2) << endl; // Accessing the third element using pointer arithmetic

    return 0;
}