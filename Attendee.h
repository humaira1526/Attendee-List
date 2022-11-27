#pragma once

#include <string>
using namespace std;


class Attendee {
    string firstname;
    string lastname;

public:
    Attendee(string fn, string ln);

    void setFirstName(string fn);
    void setLastName(string ln);

    string getFirstName();
    string getLastName();
};
