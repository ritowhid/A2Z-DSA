#include<bits/stdc++.h>
using namespace std;

// pairs
void explainPair() {
    
    /* pair<int> p = {3}; ❌ Invalid, pair needs two types 
    allow us to store two values as a single element */

    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}}; // nested property of pairs.
    cout << p.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair< int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl;
}

int main() {
    explainPair(); // call the function
    return 0;
}