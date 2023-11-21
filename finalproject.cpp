#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Airline {};
class Flight {
public:

private:
    vector<vector<seat>> map;
    int rows;
    int col;
};
class Passenger {
public:

private:

};
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