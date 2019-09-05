#include <iostream>
using namespace std;
#include <vector>

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector<int> revVctr(8);               // User values
    int i;                        // Loop index
    int temp;                      // variable to store numbers in

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr[i];
    }

    // Reverse
    for (i = 0; i < 4; ++i) {
        temp = revVctr.at(NUM_ELEMENTS - (i + 1));
        revVctr.at(NUM_ELEMENTS - (i + 1)) = revVctr.at(i) ; // Swap
        revVctr.at(i) = temp;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr[i];
    }
    cout << endl;

    return 0;
}