#include<bits/stdc++.h>
using namespace std;

// comparator must be outside main
bool comp(pair<int, int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.first > p2.first) return true;
    return false;
}

int main() {
    int a[] = {5,3,2,1,4};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n); // sort without sorting algorithm
    vector<int> v = {5,3,2,1,4};
    sort(v.begin(), v.end()); // if you using container like array, vector - sort like this

    sort(a+2, a+4); // if you want to sort a specific portion

    sort(a, a+n, greater<int>()); // sort in descending order ->{5,3,2,1}

    pair<int, int> arr[] = {{1, 2},{2, 1}, {4, 1}};
    /* 
     sort it according to increasing second element ->{2,1},{4,1},{1,2}
     - if second element is same, then sort
     it according to first element but in descending ->{4,1},{2,1},{1,2}

     This is combination of increasing as well as decreasing
     
     */

     // pair<int, int> a[] = {{1, 2},{2, 1}, {4, 1}};
     int m = sizeof(arr)/sizeof(arr[0]);
     sort(arr, arr+m, comp); // comp - self written comparator(it's a bolean function)


//------------------------------------------------------------------------------
     int num = 7;
     int cnt = __builtin_popcount(num);
     /* 
        binary 7->111; 3bits. 7 = 32 bits inside the computer.
        builtin_popcount says how many one's are there or how many set bits are there, it's return 3 set bits.
        if num = 6. 6->110; 3bits. and there is 2 set bits.
     */ 

     long long num2 = 165786578687LL;
     int cnt2 = __builtin_popcountll(num2);

     string s = "123"; // if you want all permutations, you have to start with sorted element.
     // sort(s.begin(), s.end());
     do {
        cout << s << endl;
     } while(next_permutation(s.begin(), s.end()));

     //{1, 10, 5, 6}
     int maxi = *max_element(a,a+n);
}
