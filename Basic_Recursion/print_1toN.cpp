#include <bits/stdc++.h>
using namespace std;
// print linearly from 1 to N

void printNum(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    printNum(i + 1, n);
}
int main()
{
    int n = 5;
    printNum(1, n);
    return 0;
}