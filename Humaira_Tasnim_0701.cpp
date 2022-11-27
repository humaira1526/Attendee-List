#include<iostream>
#include"Attendee.h"
#include"AttendeeList.h"

using namespace std;

void addAttendeeDialog(AttendeeList& list) {
    if (list.getSize() > 5) {
        cout << "List is full. A new attendee cannot be added." << endl;
        return;
    }

    string fn, ln;

    cout << "\t--- Add an attendee ---";
    cout << "\n\tEnter attendee's first name: ";
    cin >> fn;
    cout << "\tEnter attendee's last name: ";
    cin >> ln;

    list.addAttendee(fn, ln);
}


int main() {

    AttendeeList list;



    list.print();

    int option;

    while (1) {

        cout << "\n--- MENU ---";
        cout << "\n1. Add an attendee.";
        cout << "\n2. Exit.";
        cout << "\nChoose an option [1-2]: ";

        cin >> option;

        if (option == 1) {
            addAttendeeDialog(list);
            list.print();
            return 0;
        }

        else
            return 0;
        
        

    }
    

}