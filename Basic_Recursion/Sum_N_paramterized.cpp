#include <bits/stdc++.h>
using namespace std;
// parameterized recursive sum
void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    f(i - 1, sum + i);
}
int main()
{
    int n = 3;
    f(n, 0);
    return 0;
}