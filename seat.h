#ifndef MY_SEAT_CLASS
#define MY_SEAT_CLASS

using namespace std;

class seat {
public:
    int get_row() const {return seat_row;}
    char get_col() const {return seat_col;}
    void set_row(int r) {seat_row = r;}
    void set_col(char c) {seat_col = c;}
private:
    int seat_row;
    char seat_col;
};

#endif