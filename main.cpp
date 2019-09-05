#include <iostream>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    int revVctr[8];               // User values
    int i;                        // Loop index
    int temp;                      // variable to store numbers in

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i < 4; ++i) {
        temp = revVctr[NUM_ELEMENTS - (i + 1)];
        revVctr[NUM_ELEMENTS - (i + 1)] = revVctr[i] ; // Swap
        revVctr[i] = temp;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}