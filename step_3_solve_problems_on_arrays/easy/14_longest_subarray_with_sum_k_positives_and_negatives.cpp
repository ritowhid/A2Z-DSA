// Brute Force

#include <bits/stdc++.h>
using namespace std;

// Class to handle subarray-related operations
class SubarraySolver {
public:
    // Method to find the length of the longest subarray with sum equal to k
    int getLongestSubarray(vector<int>& a, int k) {
        int n = a.size(); // Get the size of the input array
        int len = 0;      // Variable to store the maximum length found

        // Loop to choose the starting index of the subarray
        for (int i = 0; i < n; i++) {
            // Loop to choose the ending index of the subarray
            for (int j = i; j < n; j++) {
                int sum = 0; // Store sum of current subarray

                // Loop to calculate the sum of the subarray from i to j
                for (int idx = i; idx <= j; idx++) {
                    sum += a[idx];
                }

                // If subarray sum matches target, update maximum length
                if (sum == k) {
                    len = max(len, j - i + 1);
                }
            }
        }
        return len; // Return the longest length found
    }
};

int main() {
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    SubarraySolver solver;
    int len = solver.getLongestSubarray(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}



/*
// Better Approach
#include <bits/stdc++.h>
using namespace std;

// Class to encapsulate the subarray logic
class SubarraySolver {
public:
    // Method to find the longest subarray with sum equal to k
    int getLongestSubarray(vector<int>& a, int k) {
        int n = a.size(); // Total number of elements
        int len = 0;      // Variable to store the max length found

        // Outer loop: pick every possible starting index
        for (int i = 0; i < n; i++) {
            int s = 0; // Reset sum for each new starting index

            // Inner loop: extend the subarray from the current start
            for (int j = i; j < n; j++) {
                s += a[j]; // Add current element to the ongoing sum

                // If current sum equals target, update the max length
                if (s == k) {
                    len = max(len, j - i + 1);
                }
            }
        }
        return len; // Return the maximum length found
    }
};

int main() {
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    SubarraySolver solver;
    int len = solver.getLongestSubarray(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}



// Optimal Approach

#include <bits/stdc++.h>
using namespace std;

// Class to encapsulate subarray logic
class SubarraySolver {
public:
    // Function to get the length of longest subarray with sum equal to k
    int getLongestSubarray(vector<int>& a, int k) {
        int n = a.size();
        map<int, int> preSumMap; // prefixSum -> earliest index
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i]; // compute running prefix sum

            // Case 1: If the entire sum from 0 to i is equal to k
            if (sum == k) {
                maxLen = max(maxLen, i + 1);
            }

            // Case 2: If (sum - k) is seen before, a valid subarray exists
            int rem = sum - k;
            if (preSumMap.find(rem) != preSumMap.end()) {
                int len = i - preSumMap[rem];
                maxLen = max(maxLen, len);
            }

            // Only store the first occurrence of each prefix sum
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }

        return maxLen;
    }
};

int main() {
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    SubarraySolver solver;
    int len = solver.getLongestSubarray(a, k);

    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

*/