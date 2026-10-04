#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int a = 10;
    int* ptr =&a;
    cout << *ptr;
    ptr = ptr +2;
    cout <<ptr<<endl;
    
    return 0;
}