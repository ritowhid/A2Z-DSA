#include <bits/stdc++.h>
using namespace std;
// nth fibonacci  number using recursive function
//  like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
int f(int n)
{
    if (n <= 1)
        return n;
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int result = f(n);
    cout << "Fibonacci number f(" << n << ") is " << result << endl;

    return 0;
}