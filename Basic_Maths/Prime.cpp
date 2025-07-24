#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++) // instead of it, use this:int i = 1; i <= sqrt(n); i++, it reduce the number of iteration
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}