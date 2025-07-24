#include <bits/stdc++.h>
using namespace std;

int main()
{
    // roll no is unique key. value is name.
    // Map is a container which stores everything respect of {keys, values}
    // Map stores unique keys in sorted order, something similar to set data structures.

    map<int, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);

    mpp.insert({2, 4});
    //--------------------------------
    map<int, pair<int, int>> mpp2;
    mpp2[1] = {10, 20};
    mpp2[2] = make_pair(30, 40);

    //--------------------------------
    map<pair<int, int>, int> mpp3;
    mpp3[{2, 3}] = 10;
    //--------------------------------

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << it->second;

    auto it = mpp.find(5);

    // this is syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    // erase, swap, size, empty, are same as others.
}