#include "flight.h"
#ifndef MY_MAIN
#define MY_MAIN


using namespace std;

int menu();
Flight populate_flight_from_file(string txt_file);
void display_passengers(Flight f);
void add_passenger(Flight &f);
void remove_passenger(Flight &f);
void save_data(string txt_file);
#endif