#include <bits/stdc++.h>
using namespace std;
// print recursive from n to 1

void printNum(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    printNum(n - 1);
}
int main()
{
    int n = 5;
    printNum(n);
    return 0;
}