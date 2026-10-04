#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Memory address of a: " << p << endl;   
    cout<< "Value at that address: " << *p << endl;
    cout << "Comparision: " << (p == &a) << endl;


    return 0;
}