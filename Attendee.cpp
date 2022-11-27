#include "attendee.h"
#include<iostream>
#include<string>

Attendee::Attendee(string fn, string ln) {
    setFirstName(fn);
    setLastName(ln);
}

void Attendee::setFirstName(string fn) {
    firstname = fn;
}

void Attendee::setLastName(string ln) {
    lastname = ln;
}

string Attendee::getFirstName() {
    return firstname;
}

string Attendee::getLastName() {
    return lastname;
}