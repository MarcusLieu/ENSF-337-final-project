#include<iostream>
#include<fstream>
#include "main.h"
#include "flight.h"
#include<vector>

using namespace std;

int menu();


int main(void) {
 
    Flight f = populate_flight_from_file("flight_info.txt");
    int choice = 1;
    while (choice != 0) {
        char temp;
        switch (menu()) {
            case 1:
                f.print_seatmap();
                cout << endl;
                cout << "press any key then enter to return to menu ";
                cin >> temp;
                break;
            case 2:
                display_passengers(f);
                cout << "press any key then enter to return to menu ";
                cin >> temp;            
                break;
            case 3:
                add_passenger(f);                   
                cout << "press any key then enter to return to menu ";
                cin >> temp;                  
                break;
            case 4:
                f.delete_passenger();
                cout << "press any key then enter to return to menu ";
                cin >> temp;                  
                break;
            case 5:
                cout << "press any key then enter to return to menu ";
                cin >> temp;                  
                break;
            case 6:
                choice = 0;
                break;
        }
    }
    return 0;
}

int menu() {
    int answer;
    cout << "Version: 1.0" << endl;
    cout << "Term Project - Flight Management Program in C++" << endl;
    cout << "Produced by: " << endl;
    cout << "Year: 2023" << endl;
    cout << endl;
    cout << "<<< Press Return to Continue >>>" << endl;
    cout << endl;
    cout << "Please select one of the following options:" << endl;
    cout << "1. Display Flight Seat Map" << endl;
    cout << "2. Display Passengerts Information" << endl;
    cout << "3. Add a New Passenger" << endl;
    cout << "4. Remove an Existing Passenger" << endl;
    cout << "5. Save Data" << endl;
    cout << "6. Quit" << endl;
    cout << endl;
    cout << "Enter your choice: (1, 2, 3, 4, 5, or 6)" << endl;
    cin >> answer;
    return answer;
}


Flight populate_flight_from_file(string txt_file) {

    ifstream in_file(txt_file);

    if (in_file.fail()) {
        cout  << "Error opening file... quitting" << endl;
        exit(1);
    }


    string flight_name;
    int s_row;
    int s_col;

    // read flight name and seat dimensions from file
    in_file >> flight_name >> s_row >> s_col;

    Flight test_flight(flight_name, s_row, s_col, 0);

    string line;
    // skip first line because it is in different format
    while(getline(in_file, line) && !in_file.eof()) {
        string first_name, last_name, phone_number;
        int id, row;
        char col;
        char Fname_field[21];
        char Lname_field[21];
        char Pnum_field[21];

        in_file.get(Fname_field, 21, '\n');
        first_name = Fname_field;
        in_file.get(Lname_field, 21, '\n');
        last_name = Lname_field;
        in_file.get(Pnum_field, 21,'\n');
        phone_number = Pnum_field;
        in_file >> row;
        in_file >> col;
        in_file >> id;

        // turn column letter to actual int to use in matrix
        int col_number = col - 65;

        Passenger person(id, first_name, last_name, phone_number, row, col_number,  &test_flight.get_seatmap().at(row).at(col_number));
        test_flight.assign_seat(row-1, col_number);

        test_flight.insert_passenger(person);
    }
    return test_flight;
}

void display_passengers(Flight f) {
    cout << f.get_passengers().size() << endl;
    cout << "+------------------------------+" << endl;
    for (int i = 0; i < f.get_passengers().size(); i++) {
        cout << "First Name: " << f.get_passengers().at(i).get_Fname() << endl;
        cout << "Last Name: " << f.get_passengers().at(i).get_Lname() << endl;
        cout << "Phone Number: " << f.get_passengers().at(i).get_phone_num() << endl;
        cout << "Row Number: " << f.get_passengers().at(i).get_seat_row() +1 << endl;
        char l = f.get_passengers().at(i).get_seat_col() + 65;
        cout << "Column Letter: " << l << endl;
        cout << "Passenger ID: " << f.get_passengers().at(i).get_id() << endl;
        cout << "+------------------------------+" << endl;
    } 
}

void add_passenger(Flight &f) {
    string fn, l, n;
    int id, r, c;
    char col;
    cout << "Enter ID (XXXXX): ";
    cin >> id;
    cout << endl;                
    cout << "Enter First Name: ";
    cin >> fn;
    cout << endl;
    cout << "Enter Last Name: ";
    cin >> l;
    cout << endl;
    cout << "Enter Phone Number(XXX-XXX-XXXX): ";
    cin >> n;
    cout << endl;    
    cout << "Enter Seat Row: ";
    cin >> r;
    cout << endl;       
    cout << "Enter Seat Column Letter (caps): ";
    cin >> col;
    cout << endl;
    c = col - 65;
    Passenger p(id, fn, l, n, r-1, c, &f.get_seatmap().at(r).at(c));
    f.insert_passenger(p);
    f.assign_seat(r-1,c);
}
