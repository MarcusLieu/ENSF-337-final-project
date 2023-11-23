#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS
#include <iostream> 
using namespace std;
#include "string"
#include "vector"

class flight {
    private:
        string flight_ID;
        int num_rows;
        int num_cols;
        vector < vector < seats > > seat_map; //check

    public:
        const void add_pass(const int P_ID);
        const void remove_pass(const int P_ID);

        const void set_ID(int id) {flight_ID = id;}
        const void set_num_rows(int num) {num_rows = num;}
        const void set_num_cols(int num) {num_cols = num;}
        const void set_seat_map(v)




};


