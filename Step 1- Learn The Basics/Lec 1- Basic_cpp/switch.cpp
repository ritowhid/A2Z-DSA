#include <iostream>
#include <string>
using namespace std;

int main() {
    int day;
    cout << "Enter any number: ";
    cin >> day;

    // Standard switch
    switch (day) {
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
        case 7:
            cout << "Friday" << endl;
            break;
        default:
            cout << "There is no day exist" << endl;
    }

    // if-else version
    if (day == 1)
        cout << "Saturday" << endl;
    else if (day == 2)
        cout << "Sunday" << endl;
    else if (day == 3)
        cout << "Monday" << endl;
    else if (day == 4)
        cout << "Tuesday" << endl;
    else if (day == 5)
        cout << "Wednesday" << endl;
    else if (day == 6)
        cout << "Thursday" << endl;
    else if (day == 7)
        cout << "Friday" << endl;
    else
        cout << "There is no day exist" << endl;

    // Multiple cases with same output
    switch (day) {
        case 1:
            cout << "Saturday you have class" << endl;
            break;
        case 2:
        case 3:
            cout << "Weekend" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "You have class, check your routine" << endl;
            break;
        case 7:
            cout << "it's Friday!!! Take rest" << endl;
            break;
    }

    // Switch-like logic with string (no switch on string in C++)
    string days = "Sunday";
    string result = "";

    if (days == "Saturday" || days == "Sunday")
        result = "6 am";
    else if (days == "Monday")
        result = "8 am";
    else
        result = "7 am";

    cout << result << endl;

    // Character switch
    cout << "Enter a character: ";
    char ch;
    cin >> ch;

    switch (ch) {
        case 'a':
        case 'A':
            cout << "You entered 'a' or 'A'" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You entered 'b' or 'B'" << endl;
            break;
        default:
            cout << "You entered a character other than 'a'/'A' or 'b'/'B'" << endl;
    }

    return 0;
}
