#include<vector>
#include "passenger.h"
#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS



class Flight {
public:
    Flight();
    Flight(string id, int r, int c, int plist_length);
    string get_flight_id() const {return flight_id;}
    int get_seat_rows() const {return seat_rows;}
    int get_seat_cols() const {return seat_cols;}
    vector<Passenger> get_passengers() const {return passenger_list;}
    vector<vector<Seat> > get_seatmap() const {return seatmap;}
    void set_flight_id(string id) {flight_id = id;}
    void set_seat_rows(int r) {seat_rows = r;}
    void set_seat_cols(int c) {seat_cols = c;}
    void set_passenger_list(vector<Passenger> plist) {passenger_list = plist;}
    void set_seat_map(vector<vector<Seat> > smap) {seatmap = smap;}
    void print_seatmap();
    void insert_passenger(const Passenger& person);
    void delete_passenger();
    void assign_seat(int r, int c);
    void deassign_seat(int r, int c);
private:
    string flight_id;
    int seat_rows;
    int seat_cols;
    vector<Passenger> passenger_list;
    vector<vector<Seat> > seatmap;
};

#endif