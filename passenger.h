#include <string>
#include "seat.h"
#include <iostream>
#ifndef MY_PASSENGER_CLASS
#define MY_PASSENGER_CLASS



using namespace std;

class Passenger {
public:
    Passenger(); // default constructor
    Passenger(int i, string f, string l, string n, int r, int c, Seat *p); // default constructor with arguments
    int get_id() const {return id;}
    string get_Fname() const {return Fname;}
    string get_Lname() const {return Lname;}
    string get_phone_num() const {return phone_num;}
    int get_seat_row() const {return seat_row;}
    int get_seat_col() const {return seat_col;}
    Seat* get_seat() const {return seat_ptr;}
    void set_id(int a) {id = a;}
    void set_Fname(string f) {Fname = f;}
    void set_Lname(string l) {Lname = l;}
    void set_phone_num(string n) {phone_num = n;}
    void set_seat(Seat* p) {seat_ptr = p;}
    void deassign_pointer() {seat_ptr = nullptr;}
private:
    int id;
    string Fname;
    string Lname;
    string phone_num;
    int seat_row;
    int seat_col;
    Seat *seat_ptr;
};
#endif