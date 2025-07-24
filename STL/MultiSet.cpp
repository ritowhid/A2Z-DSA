#include<bits/stdc++.h>
using namespace std;

int main() {
    // everything is same as set
    // only stores duplicate elements also
    // obey only sorted, allows duplicated, don't need to be unique

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}
    ms.insert(2); // {1, 1, 1, 2}

    ms.erase(1); // erased all 1's

    int cnt = ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1)); // erased addressed.

    ms.erase(ms.find(1), std::next(ms.find(1), 2)); // erase[start, end]
}