#include <iostream>
#include <string>
using namespace std;

int mergesort(int arr[], int left, int mid, int right) {
    // Create temporary arrays to hold the left and right subarrays
    // n1 is the size of the left subarray, and n2 is the size of the right subarray
    int n1 = mid - left + 1;  
    int n2 = right - mid;
    // Allocate memory for the temporary arrays
    // 
    int* L = new int[n1];
    int* R = new int[n2];
    // run a loop to copy the elements from the original array to the temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergesort(arr, 0, size - 1, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}