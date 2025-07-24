#include <bits/stdc++.h>
using namespace std;

string s;
int n;

bool f(int i) {
    if (i >= n / 2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return f(i + 1);
}

int main() {
    cin >> s;
    n = s.length();

    if (f(0))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
