#include<bits/stdc++.h>
using namespace std;

int main() {
    // Input a number and compare
    cout << "Enter any number: ";
    int a;
    cin >> a;

    if (a > 5) {
        cout << "hello" << endl;
    } else {
        cout << "This number is greater than five" << endl;
    }

    // Time-based greeting
    cout << "Enter any number: ";
    int time;
    cin >> time;

    if (time < 10) {
        cout << "Good morning" << endl;
    } else if (time < 18) {
        cout << "Good day" << endl;
    } else {
        cout << "Good evening" << endl;
    }

    // Ternary (short-hand if-else)
    int myTime = 20;
    string result = (myTime < 16) ? "Good Day." : "Good Evening";
    cout << result << endl;

    // Alphabet case check
    char ch;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase" << endl;
    } else {
        cout << "Uppercase" << endl;
    }

    return 0;
}
