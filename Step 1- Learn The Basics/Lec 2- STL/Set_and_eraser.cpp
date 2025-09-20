#include<bits/stdc++.h>
using namespace std;

int main() {
    // stores: sorted, unique
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency
    
    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it6 = st.find(6); // if elements is not here, its always return st.end()

    // {1, 4, 5}
    st.erase(5); // erases 5, takes logarithmic time

    int cnt = st.count(1); // if have-show the 1, if not exist- show 0

    auto it3 = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last]
    /*
    Element 4 is not removed because it2 points to 4 and the range is exclusive of the end.
    Start from [start] (include this one ✅)
    Go up to but not including [end] (skip this one ❌)
    This is called a half-open interval, or "exclusive of the end."
    */
 

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it_lb = st.lower_bound(2);
    if (it_lb != st.end()) {
        cout << (*it_lb) << endl;
    } else {
        cout << "Lower bound not found" << endl;
    }

    auto it_ub = st.upper_bound(3);
    if (it_ub != st.end()) {
        cout << (*it_ub) << endl;
    } else {
        cout << "Upper bound not found" << endl;
    }
}