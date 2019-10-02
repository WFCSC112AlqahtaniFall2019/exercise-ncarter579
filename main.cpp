//Nathan Carter and Steven Parrill

#include <iostream>
using namespace std;
#include <vector>

struct playerInfo{
    string name;
    int jersey;
    int rating;
};


int main() {

    const int NUM_ELEMENTS = 5;   // Number of elements
    vector<int> revVctr(5);               // User values
    int i;                        // Loop index
    int temp;                      // variable to store numbers in

    vector <playerInfo> information(5);

    for (int j = 0; j < 5; j++){

    }
    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << "enter player name" << endl;
        cin >> information.at(i).name;
        cout << "enter player rating (1-9)" << endl;
        cin >> information[i].rating;
        cout << "enter player jersey number (1-99)" << endl;
        cin >> information[i].jersey;
    }

    // Reverse
    /*
    for (i = 0; i < 4; ++i) {
        temp = revVctr.at(NUM_ELEMENTS - (i + 1));
        revVctr.at(NUM_ELEMENTS - (i + 1)) = revVctr.at(i) ; // Swap
        revVctr.at(i) = temp;
    }
     */

    // Print values

    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << information.at(i).name << " " << information.at(i).rating << " " << information.at(i).jersey << endl;
    }
    cout << endl;

    cout << "Menu: " << endl;
    cout << "(a) Add player to roster" << endl;
    cout << "(b) Delete player from roster" << endl;
    cout << "(c) Update player rating" << endl;
    cout << "(d) Update player jersey number" << endl;

    char selection;
    cin >> selection;
    if (selection == 'a'){
        information.emplace_back();
        cout << "enter player name" << endl;
        cin >> information.at(information.size() - 1).name;
        cout << "enter player rating (1-9)" << endl;
        cin >> information[information.size() - 1].rating;
        cout << "enter player jersey number (1-99)" << endl;
        cin >> information[information.size() - 1].jersey;
    }
    if (selection == 'b'){
        information.pop_back();
    }
    if (selection == 'c'){
        cout << "update last players rating" << endl;
        cin >> information[information.size()].rating;
    }
    if (selection == 'd'){
        cout << "update last players jersey number" << endl;
        cin >> information[information.size()].jersey;
    }



    return 0;
}