#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int a = 10;
    int* ptr =&a;
    int* ptr2;
    int* ptr1 = ptr2 + 2;

    cout << "Address of a: " << ptr << endl;
    cout << ptr1 - ptr2 << endl;


    cout << *ptr;
    ptr = ptr +2;
    cout <<ptr<<endl;

    return 0;
}