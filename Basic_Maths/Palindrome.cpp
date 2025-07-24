#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x < 0)
        cout << "false";
    int org = x, rev = 0;
    while (x > 0)
    {
        int ld = x % 10;
        if (rev > (INT_MAX - ld) / 10)
            return false;
        rev = (rev * 10) + ld;
        x /= 10;
    }
    if (rev == org)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}