#include "seat.h"

void Seat::set_status(int s) {
    status = s;
};

// default constructor
Seat::Seat(): row(0), col(0), status(0) {};

// default constructor with arguments
Seat::Seat(int r, int c, int s): row(r), col(c), status(s) {}; 
