#include <bits/stdc++.h>
using namespace std;
// factorial- multiplication of 1 to n
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n = 3;
    cout << fact(n);
    return 0;
}