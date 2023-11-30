#include<string>
#ifndef MY_SEAT_CLASS
#define MY_SEAT_CLASS


using namespace std;

class Seat {
public:
    Seat(); // default constructor
    Seat(int r, int c, int s); // default constructor with arguments
    int get_row() const {return row;}
    int get_col() const {return col;}
    int get_status() const {return status;}
    void set_row(int r) {row = r;}
    void set_col(int c) {col = c;}
    void set_status(int s);
private:
    int row;
    int col;
    int status;
};

#endif