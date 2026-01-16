#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number in the array
    int missingNumber(vector<int>& a, int N) {
        // Loop through numbers from 1 to N
        for (int i = 1; i <= N; i++) {
            int flag = 0; // To check if i exists in array

            // Linear search to check if i is in the array
            for (int j = 0; j < N - 1; j++) {
                if (a[j] == i) {
                    flag = 1; // i is found
                    break;
                }
            }

            // If i was not found, it is the missing number
            if (flag == 0) return i;
        }

        // Control should never reach here
        return -1;
    }
};

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}


/*
// Optimised Approach 1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number using sum formula
    int missingNumber(vector<int>& a, int N) {
        // Sum of first N natural numbers using formula: N*(N+1)/2
        int sum = (N * (N + 1)) / 2;

        // Sum of elements present in the array
        int s2 = 0;
        for (int i = 0; i < N - 1; i++) {
            s2 += a[i];
        }

        // The missing number is the difference between expected and actual sum
        return sum - s2;
    }
};

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}



// Optimised Approach 2

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number using XOR approach
    int missingNumber(vector<int>& a, int N) {
        int xor1 = 0, xor2 = 0;

        // XOR all the array elements and numbers from 1 to N-1
        for (int i = 0; i < N - 1; i++) {
            xor2 = xor2 ^ a[i];      // XOR of array elements
            xor1 = xor1 ^ (i + 1);   // XOR of numbers from 1 to N-1
        }

        xor1 = xor1 ^ N; // Include N in the XOR

        // XOR of xor1 and xor2 gives the missing number
        return xor1 ^ xor2;
    }
};

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    Solution obj;
    int ans = obj.missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}

*/