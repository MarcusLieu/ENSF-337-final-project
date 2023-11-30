#include<iostream>
#include "flight.h"

using namespace std;
Flight::Flight(): flight_id(), seat_rows(0), seat_cols(0) {
    passenger_list = vector<Passenger>();
    seatmap = vector<vector<Seat > >();
};

Flight::Flight(string id, int r, int c, int plist_length): flight_id(id), seat_rows(r), seat_cols(c) {
    passenger_list = vector<Passenger>(plist_length);
    seatmap = vector<vector<Seat > >(r, vector<Seat>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            seatmap.at(i).at(j).set_col(j);
            seatmap.at(i).at(j).set_row(i);
        }
    }
};

void Flight::print_seatmap() {
    cout << "Aircraft Seat Map" << endl;
    char column_letter = 'A';
    // print column letters

    cout << "    ";

    for (int c = 0; c < seat_cols; c++) {
        cout << " " << column_letter << "  ";
        column_letter++;
    }
    cout << endl;
    // print rows
    for (int r = 0; r < seat_rows; r++) {
        cout << "   ";
        for (int c = 0; c < seat_cols; c++) {
            cout << "+---";
        }
        cout << "+" << endl;
        cout << r+1;
        if (r < 9) {
            cout << "  ";
        }
        else{
            cout << " ";
        }

        for (int c = 0; c < seat_cols; c++) {
            cout << "| ";
            if (seatmap.at(r).at(c).get_status() == 1) {
                cout << "X ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "|" << endl;
    }
    cout << "   ";
    for (int c = 0; c < seat_cols; c++) {
            cout << "+---";
    }
    cout << "+" << endl;
}

void Flight::insert_passenger(const Passenger& person) {
    passenger_list.push_back(person);
}

void Flight::delete_passenger() {
    int id;
    cout << "Enter ID for passenger you would like to remove (XXXXX): ";
    cin >> id;

    for (int i = 0; i < passenger_list.size(); i++) {
        if (passenger_list.at(i).get_id() == id) {
            int row = passenger_list.at(i).get_seat_row();
            cout << row << endl;
            int col = passenger_list.at(i).get_seat_col();
            cout << col << endl;
            seatmap.at(row).at(col).set_status(0);
            passenger_list.at(i).deassign_pointer();
            passenger_list.erase(passenger_list.begin()+i);
            cout << "Passenger removed" << endl;
            break;
        }
    }
}

void Flight::assign_seat(int r, int c) {
    seatmap.at(r).at(c).set_status(1);
}

void Flight::deassign_seat(int r, int c) {
    seatmap.at(r).at(c).set_status(0);
}