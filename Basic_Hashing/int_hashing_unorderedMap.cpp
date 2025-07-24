#include <bits/stdc++.h>
using namespace std;
// map store all the elment in sorted order

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    map<int, int> mpp;

    cout << "Enter " << n << " elements: \n";
    //  Precompute frequency while taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    cout << "\nFrequencies of elements (sorted by value):\n";
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;

    while (q--)
    {
        int number;
        cout << "Enter number to get its frequency: ";
        cin >> number;
        cout << number << " appeared " << mpp[number] << " time";
        if (mpp[number] != 1)
            cout << "s";
        cout << ".\n";
    }

    return 0;
}