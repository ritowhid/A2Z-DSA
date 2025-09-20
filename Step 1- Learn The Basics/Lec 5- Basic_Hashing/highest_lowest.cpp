#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    map<string, int> freq;
    cout << "Enter " << n << " elements (space-separated):\n";
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        freq[x]++;
    }

    string maxElem, minElem;
    int maxFreq = 0, minFreq = INT_MAX;

    for (auto it : freq) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElem = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minElem = it.first;
        }
    }

    cout << "\nElement with highest frequency: " << maxElem << " -> " << maxFreq << " time";
    if (maxFreq != 1) cout << "s";
    cout << endl;

    cout << "Element with lowest frequency: " << minElem << " -> " << minFreq << " time";
    if (minFreq != 1) cout << "s";
    cout << "." << endl;

    return 0;
}