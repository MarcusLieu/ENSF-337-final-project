
#include <iostream> 
using namespace std;

#include "string"
#include "vector"

flight::populate_flight(char * file){
    ifstream in(file, ios::in);
    if (in.fail()) {
        cout << "sorry, cannot open the file.";
        exit(1);
    }
    while(1) {
        //code to populate flight
        break;
    }
}

const void flight::add_pass(const Passenger & person){ //idk lol
    for (int i = 0; i < passenger_list.size(); i++){
        if (passenger_list[i].ID < person.ID) {
            continue;
        }
        else {
            passenger_list.insert(i, person);
            break;
        }
    }
}

const void flight::remove_pass(const Passenger & person) {
    for (int i = 0; i < passenger_list.size(); i++){
        if (passenger_list[i].ID == person.ID) {
            passenger_list.erase(i);
            break;
        }
    }
}

void flight::set_seat_map(){
    seat_map.resize(num_rows);
    for(int i = 0; i < num_rows; i++){
        seat_map[i].resize(num_cols);
    }    
}

int menu(){
    int choice = -1;
    cout << "Please select one of the following options: \n";
    cout << "1. Display FLight seat map.\n";
    cout << "2. Display Passengers Information.\n";
    cout << "3. Add a new passenger.\n";
    cout << "4. Remove an existing passenger.\n";
    cout << "5. Save data.\n";
    cout << "6. Quit.\n";
    cin >> choice;
    return choice;
}
