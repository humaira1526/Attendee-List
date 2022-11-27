#include "attendeelist.h"
#include <iostream>
using namespace std;

AttendeeList::AttendeeList() {
    position = 0;

    for (int i = 1; i < 6; i++) {
        list[i] = nullptr;
    }
}

void AttendeeList::addAttendee(string fn, string ln) {
    
    list[position++] = new Attendee(fn, ln);
}

Attendee* AttendeeList::getAttendee(int i) const {
    if (i < 0 || i >= position) {
        return nullptr;
    }
    return list[i];
}

int AttendeeList::getSize() const {
    return position;
}

void AttendeeList::print() const {

    cout << "--- ATTENDEE LIST ---" << endl;

    for (int i = 1; i < 6; i++) {
        if (list[i] != nullptr) {
            cout << (*list[i]).getFirstName() + " " + (*list[i]).getLastName();
        }
        else {
            cout << "[Empty]";
        }
        cout << endl;
    }
}


