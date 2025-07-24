#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Integer types
    int b = 127;                // byte (1 byte)
    short s = -32768;           // short (2 bytes)
    int myNum = 5;              // int (typically 4 bytes)
    long long l = -922337203LL; // long long (at least 8 bytes)

    // Floating-point types
    float myF = 4.54f;    // 4 bytes
    double d = 35.242434; // 8 bytes

    // Character and Boolean
    char myLetter = 'R'; // 1 byte
    bool myB = true;     // 1 byte in C++

    // String
    string myText = "Hello";

    // Scientific notation
    float f1 = 35e3f;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;

    // String concatenation
    string name1 = "Rakibul";
    string name2 = "Towhid";
    cout << name1 + " " + name2 << endl;

    // 2nd way: string length and concat
    string firstName = "Rakibul";
    string lastName = "Towhid";

    int len = lastName.length(); // or .size()
    cout << len << endl;
    cout << firstName + lastName << endl;

    return 0;
}
