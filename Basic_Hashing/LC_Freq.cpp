#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    long long windowSum = 0;
    int left = 0;
    int maxFreq = 0;

    for (int right = 0; right < nums.size(); right++) {
        windowSum += nums[right];

        while ((long long)(right - left + 1) * nums[right] > windowSum + k) {
            windowSum -= nums[left];
            left++;
        }

        maxFreq = max(maxFreq, right - left + 1);
    }

    return maxFreq;
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = maxFrequency(nums, k);
    cout << "Maximum frequency after " << k << " operations: " << result << endl;

    return 0;
}
