#include <bits/stdc++.h>
using namespace std;
//  print 1 to n
void printNumBT(int i)
{
    if (i < 1)
        return;
    printNumBT(i - 1);
    cout << i << " ";
}
int main()
{
    int n = 5;
    printNumBT(n);
    return 0;
}