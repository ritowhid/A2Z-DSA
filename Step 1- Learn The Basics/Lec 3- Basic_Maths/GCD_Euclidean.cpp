#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 36, b = 60;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b);
    return 0;
}
