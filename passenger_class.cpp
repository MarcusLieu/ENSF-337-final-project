Passenger::Passenger(){
    Fname = '\0';
    Lname = '\0';
    ID = 0;
    phone_num = '\0';
    next = nullptr;
    prev = nullptr;
}

Passenger::Passenger(int id, string first_n, string last_n, string phone, seat * seat): ID(id) {
    Fname = first_n;
    Lname - last_n;
    phone_num = phone;
    seat_ptr = seat;
}

Passenger::~Passenger(){

}

