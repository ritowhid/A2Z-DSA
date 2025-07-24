#include<bits/stdc++.h>
using namespace std;

int main() {
    //FIFO: first in first out
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}
    q.emplace(4); // {1, 2, 3, 4}

    q.back() += 5; // last element becomes 9 -> {1, 2, 3, 9}

    cout << q.back() << endl;   // prints 9
    cout << q.front() << endl;  // prints 1

    q.pop();                    // {2, 3, 9}
    cout << q.front() << endl;  // prints 2

    // size swap empty same as stack
}