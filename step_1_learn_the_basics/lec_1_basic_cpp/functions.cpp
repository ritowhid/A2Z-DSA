#include <bits/stdc++.h>
using namespace std;
// function are set of code which performs something for you
// functions are used to modularise code
// functions are used to increase readability
// functions are used to use same code multiple times
// void
// return
// parameterized
// non parameterized

// A simple function that adds two numbers (return + parameterized)
int add(int a, int b)
{
    return a + b;
}

// A function that swaps two values using pass-by-reference (void + parameterized)
void swapByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

// A function that tries to swap using pass-by-value (void + parameterized)
void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

// A void non-parameterized function
void greetUser()
{
    cout << "Hello, welcome to the function demo!" << endl;
}

// A return + non-parameterized function
int getRandomNumber()
{
    return rand() % 100; // generates a random number between 0 and 99
}

int main()
{
    // calling void + non-parameterized
    greetUser();

    int a = 5, b = 10;

    // using add function (return + parameterized)
    int sum = add(a, b);
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    // trying to swap using pass-by-value
    cout << "Before swapByValue: a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << " (No Change)" << endl;

    // now using pass-by-reference
    cout << "Before swapByReference: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << " (Swapped)" << endl;

    // calling return + non-parameterized
    int random = getRandomNumber();
    cout << "Random number generated: " << random << endl;

    return 0;
}