#include <iostream>
#include <vector>
#include <string>

using namespace std;

int menu() {
    int choice = -1;
    cout << "Please select one of the following options:" << endl;
    cout << "1. Display Flight seat map." << endl;
    cout << "2. Display Passengers Information." << endl;
    cout << "3. Add a new passenger." << endl;
    cout << "4. Remove an existing passenger" << endl;
    cout << "5. Save data" << endl;
    cout << "6. Save Quit" << endl;
    cin >> choice;
    return choice;
}

int main(void) {
    int choice = 1;
    while (choice != 0) {
        switch(menu()) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
        }
    }
}