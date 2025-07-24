#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    // LIFO: last in first out
    // push, pop, top
    // Correctly pushing values onto the stack
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.push(5); //{5,4,3,2,1}

    // Top element
    cout << "Top: " << st.top() << endl; // 5

    st.pop(); // Removes 5 -> {4,3,2,1}

    cout << "New Top: " << st.top() << endl; // 4
    cout << "Size: " << st.size() << endl;   // 4
    cout << "Is Empty?: " << st.empty() << endl; // 0 (false)

    // Swapping stacks
    stack<int> st1, st2;
    st1.swap(st2);

    return 0;
}