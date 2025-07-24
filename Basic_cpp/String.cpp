#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    string naam = "towhid"; // string in C++ is mutable by default
    cout << naam << endl;

    string name = "Towhid";
    cout << "Hello " << name << endl;
    cout << name + " Rakibul" << endl;

    string sn = "Rakib";
    sn = sn + " Towhid";
    cout << "Hello " << sn << endl;

    string s1 = "rakib";
    string s2 = "towhid";
    cout << (s1 == s2) << endl; // compares values, not addresses like Java's '=='

    // Simulating StringBuffer (mutable, thread-safe in Java)
    stringstream sb;
    sb << "Towhid";
    string temp = sb.str();
    cout << "Initial capacity simulation: " << temp.capacity() << endl;
    sb << " Islam";
    cout << sb.str() << endl;

    /*
        stringstream in C++ does not have capacity like Java's StringBuffer.
        But conceptually it's similar: it allows appending and modifying strings dynamically.
        C++ string also handles dynamic resizing internally.
    */

    /*
        stringstream behaves like both StringBuffer and StringBuilder in some ways.
        There is no built-in thread-safety or synchronization unless you implement it yourself.
        Use it in single-threaded contexts just like StringBuilder in Java.
    */

    return 0;
}
