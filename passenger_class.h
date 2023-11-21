#ifndef MY_PASSENGER_CLASS
#define MY_PASSENGER_CLASS

#include <iostream>
#include <vector>
#include <string>

class Passenger {
    private:
        char * Fname;
        char * Lname;
        int ID;
        char * phone_num; 

    public:
        void set_Fname(const char *);
        void set_Lname(const char *);
        void set_ID(int id) {ID = id};
        void set_phone_num(const char *);
        
        const int get_ID() const {return ID };
        const char * get_Fname() const;
        const char * get_Lname() const;
        const char * get_phone_num() const;
};