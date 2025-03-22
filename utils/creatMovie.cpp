//
// Created by Asmita Tamang on 3/21/25.
//

#include "creatMovie.h"
#include <iostream>

using namespace std;

Movie creatMovie() {
    string title;
    Date date;
    bool isPopular;

    while (true) {
        cout << "Please enter the title: ";
        getline(cin, title);
        if (!title.empty()) {
            break;
        }
    }

    cout << "Please enter the year it was released: ";
    while (true) {
        if (!(cin >> date.releaseYear)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the year it was released: ";
        } else {
            break;
        }
    }

    cout << "Please enter the month it was released: ";
    while (true) {
        if (!(cin >> date.releaseMonth)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the month it was released: ";
        } else {
            break;
        }
    }

    cout << "Please enter the day it was released: ";
    while (true) {
        if (!(cin >> date.releaseDay)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter the day it was released: ";
        } else {
            break;
        }
    }

    char yesOrNot;
    cout << "Was the movie popular? Y or N: ";
    cin >> yesOrNot;
    toupper(yesOrNot);
    while (yesOrNot != 'Y' && yesOrNot != 'N'){
        cin.clear();
        cout << "Was the movie popular? Y or N: " << endl;
        cin >> yesOrNot;
        yesOrNot = toupper(yesOrNot);
    }
    if (yesOrNot == 'Y') {
        isPopular = true;
    } else {
        isPopular = false;
    }
    return Movie{title, date, isPopular};
}
