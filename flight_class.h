#ifndef MY_FLIGHT_CLASS
#define MY_FLIGHT_CLASS

#include <iostream> 
using namespace std;

#include "string"
#include "vector"


/*
need thi sline at some point?
ifstream in("flights.txt");
*/
struct Node {
    Passenger * item;
    Node * next;
}

class flight {
    private:
        string flight_ID;
        int num_rows;
        int num_cols;
        Node * headm;
        vector < vector < seats >> seat_map; //check
        vector < vector < Passenger >> passenger_list;

    public:
        int menu();
        void populate_flight(char * file);
        const void displayHeader() const;
        const void add_pass(const int P_ID);
        const void remove_pass(const int P_ID);

        const void set_ID(int id) {flight_ID = id;}
        const void set_num_rows(int num) {num_rows = num;}
        const void set_num_cols(int num) {num_cols = num;}
        const void set_seat_map() //ahhhhhhhh idk what args 



};

flight::populate_flight(char * file){
    ifstream in(file, ios::in);
    if (in.fail()) {
        cout << "sorry, cannot open the file.";
        exit(1);
    }
    while(1) {
        //code to populate flight
        break;
    }
}

flight::add_pass(const Passenger & person){ //idk lol
    Node * new_node = new Node;
    new_node -> item = person;


}

flight::set_seat_map(){
    seat_map.resize(num_rows);
    for(int i = 0; i < num_rows; i++){
        seat_map[i].resize(num_cols);
    }
    
    
}
int menu(){
    int choice = -1;
    cout << "Please select one of the following options: \n";
    cout << "1. Display FLight seat map.\n";
    cout << "2. Display Passengers Information.\n";
    cout << "3. Add a new passenger.\n";
    cout << "4. Remove an existing passenger.\n";
    cout << "5. Save data.\n";
    cout << "6. Quit.\n";
    cin >> choice;
    return choice;
}
