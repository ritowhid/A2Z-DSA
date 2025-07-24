#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int org = x, result = 0;
    while (x > 0) {
        int ld = x%10;
        int cube = ld * ld * ld;
        result = result + cube;
        x/=10;
    }
    if( x == result) {
        cout << "true";
    } else {
        cout << "false";
    }
}

