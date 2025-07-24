#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "Enter n: ";
    cin >> n;

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n > 0)
        {
            count = count + 1;
            n = n / 10;
        }
    }
    cout << "Number of digits: " << count << endl;
    // TC-> O(log10(n))

    //Another way:
    // NOTE: This method only works for n > 0
    // int count = (int)(log10(n) + 1);
    // cout << "Number of digits: " << count << endl;
}