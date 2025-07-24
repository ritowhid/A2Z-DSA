#include <bits/stdc++.h>
using namespace std;
// you can go out 10^6 inside main; or 10^7 globally.
int hashArr[10000000];

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " element:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Precompute frequencies
    for (int i = 0; i < n; i++)
    {
        hashArr[arr[i]] += 1;
    }
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    cout << "Enter " << q << " number(s) to get their frequency:\n";

    while (q--)
    {
        int number;
        cin >> number;
        // Fetch and print frequency
        cout << "Frequency of " << number << " is: " << hashArr[number] << endl;
    }
    return 0;
}