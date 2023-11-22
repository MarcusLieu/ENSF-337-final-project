#ifndef MY_PASSENGER_CLASS
#define MY_PASSENGER_CLASS

#include <iostream>
#include <vector>
#include <string>

/* concerning the linked list 
    should we make a struct node and have the item type be passenger???
    or like... th actual passenger class has a pointer of type Passenger, 
    so it can point to the next passenger, etc... ?
*/

class Passenger {
    private:
        int ID;
        string Fname;
        string Lname;
        string phone_num; 
        Passenger * next; // like th enext ptr in a linked list 
        Passenger * prev;
        seat * seat_ptr;

    public:
        Passenger(); //default c-tor
        Passenger(int id, string first_n, string last_n, string phone, seat * seat); // c-tor
        ~Passenger(); //d-tor
        Passenger(const Passenger & src); //copy c-tor
        Passenger & operator=(const Passenger & rhs); //asn op

        void set_Fname(const char *);
        void set_Lname(const char *);
        void set_ID(int id) {ID = id};
        void set_phone_num(const char *);
        
        const int get_ID() const {return ID };
        const string get_Fname() const;
        const string get_Lname() const;
        const string get_phone_num() const;
};