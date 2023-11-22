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
struct Node {
    Passenger item;
    Node * next;
}

class Passenger {
    private:
        int ID; //P_ID
        string Fname;
        string Lname;
        string phone_num; 
        seat * seat_ptr;

    public:
        Passenger(); //default c-tor
        Passenger(int id, string first_n, string last_n, string phone, seat * seat); // c-tor MIGHT BNOT NEED THIS 
        ~Passenger(); //d-tor MIGHT NOT NEED THIS 
        Passenger(const Passenger & src); //copy c-tor MIGHT BNOT NEED THIS
        Passenger & operator=(const Passenger & rhs); //asn op MIGHT NOT NEED THIS 

        void set_Fname(string name);
        void set_Lname(string name);
        void set_ID(int id) {ID = id};
        void set_phone_num(string num);
        
        const int get_ID() const {return ID };
        const string get_Fname() const {return Fname};
        const string get_Lname() const {return Lname};
        const string get_phone_num() const {return phone_num};
};