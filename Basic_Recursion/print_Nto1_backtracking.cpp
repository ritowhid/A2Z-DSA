#include <bits/stdc++.h>
using namespace std;
// print n to 1 in backtracking way
void printNumBT(int i, int n)
{
    if (i > n)
        return;
    printNumBT(i + 1, n);
    cout << i << " ";
}
int main()
{
    int n = 5;
    printNumBT(1, n);
    return 0;
}