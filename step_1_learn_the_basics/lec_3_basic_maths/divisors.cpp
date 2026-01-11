#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // return 0;

    vector<int> ls;

    // 6*6 <= 36
    // 7*7 <= 36 false
    // O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (n / i != i)
            {
                ls.push_back(n / i);
            }
        }
    }

    // O(n log n): n is the number of factors
    sort(ls.begin(), ls.end());
    // O(number of factors)
    for (auto it : ls)
    {
        cout << it << " ";
    }

    return 0;
}