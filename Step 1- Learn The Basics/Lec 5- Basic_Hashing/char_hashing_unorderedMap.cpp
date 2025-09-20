#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of characters: ";
    cin >> n;

    char arr[n];
    map<char, int> mpp;

    cout << "Enter " << n << " characters (no spaces):\n";
    // Precompute frequency while taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;  // precompute frequency
    }

    cout << "\nFrequencies of characters (sorted alphabetically):\n";
    for (const auto &it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;

    while (q--) {
        char ch;
        cout << "Enter character to get its frequency: ";
        cin >> ch;
        cout << ch << " appeared " << mpp[ch] << " time";
        if (mpp[ch] != 1) cout << "s";
        cout << ".\n";
    }

    return 0;
}
