#include <iostream>
using namespace std;

int main()
{
    int a = 36, b = 60, gcd = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    cout << "GCD of " << a << " and " << b << " is " << gcd;
    return 0;
}
