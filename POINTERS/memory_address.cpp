#include <iostream>
#include <vector>
using namespace std;

int main() {
    float price = 100.50;
    float* pricePtr = &price; // Pointer to the price variable

    cout << "Memory address of price: " << pricePtr << endl;
    cout << "Value at that address: " << *pricePtr << endl;

    return 0;
}