#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the character/string: ";
    cin >> s;

    // pre compute
    int hashh[256] = {0};
    for(int i =0; i<s.size(); i++) {
        hashh[s[i]]++;
    }
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    while(q--) {
        char c;
        cout << "Enter the char to count: ";
        cin >> c;
        // fetch
        cout << "Frequency of '" << c << "': " << hashh[c] << endl;
    }
    return 0;
}