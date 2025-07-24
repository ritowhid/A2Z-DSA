#include <bits/stdc++.h>
using namespace std;

void f(int a[], int l, int r) {
    if (l >= r) return;
    swap(a[l], a[r]);
    f(a, l + 1, r - 1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);

    f(a, 0, n - 1);

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
