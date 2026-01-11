#include <bits/stdc++.h>
using namespace std;

// First method: print "Rakibul" N times using parameters
void printName(int i, int n) {
    if (i > n) return;
    cout << "Rakibul" << endl;
    printName(i + 1, n);
}

// Second method: print "Towhid" N times using parameters
void prinName2(int i, int n) {
    if (i > n) return;
    cout << "Towhid" << endl;
    prinName2(i + 1, n);
}

int main() {
    cout << "Running the first method:" << endl;
    printName(1, 5);

    cout << "Running the second method:" << endl;
    prinName2(1, 5);

    return 0;
}