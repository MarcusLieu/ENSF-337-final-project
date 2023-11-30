#include<iostream>
#include "passenger.h"

// default constructor
Passenger::Passenger(): id(0), Fname(), Lname(), phone_num(), seat_row(0), seat_col(0), seat_ptr(nullptr) {};

// default constructor with arguments
Passenger::Passenger(int i, string f, string l, string n, int r, int c, Seat *p): id(i), Fname(f), Lname(l), phone_num(n), seat_row(r), seat_col(c), seat_ptr(p) {};



