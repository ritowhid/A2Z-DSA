#include <bits/stdc++.h>
using namespace std;

/*
    When you don't know the size of a particular data
    structure that will be required, use a vector.
    Vector is a container that stores elements in a
    similar fashion as arrays, but with dynamic sizing.
*/

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // v becomes {1, 2};

    /* emplace_back is generally faster than push_back
    because emplace_back would construct the object
    immediately in the vector, while push_back,
    would first construct an anonymous object and
    then would copy it to the vector
    */

    // Define vector of paired data type
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // vec becomes {{1,2}, {3,4}}

    // Declare a container where lot of elements already fit (Prefilled Vectors)
    vector<int> v_prefilled1(5, 100); //{100,100,100,100,100}
    /*
        -Declares a vector v of type int.
        -It has 5 elements, all initialized to 100
        -Memory is allocated for those 5 elements, so they "already fit" into the container.
        Output: 100 100 100 100 100
    */

    vector<int> v_prefilled2(5); // initialized with 0. {0,0,0,0,0}
    /*
        -Declares a vector v of type int.
        -It has 5 elements, each default-initialized to 0(for int type)
        -Also a valid way to prefill with size, but values are zeros
        Output: 0 0 0 0 0
    */

    vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
    // Declares vector v1 with 5 elements initialized to 20.
    vector<int> v2(v1); // copy of v1
    /*
    copy constructor: v2 is a copy of v1
    all elements from v1 are copied to v2
    Output (same as v1): 20 20 20 20 20
    */

    // access element in a vector via iterator
    vector<int>::iterator it = v.begin(); // v.begin() actually point to the memory. to print the element you have to use * before variable
    it++; // points to 2nd element
    cout << "Second element: " << *it << endl;
    it = it + 2; // now points to 4th element
    cout << "Fourth element: " << *it << endl;
    it = v2.end();
    it--; // last element
    cout << "Last element using end(): " << *it << endl;

    vector<int>::iterator it = v.end(); //{10,20,30,40,50}
    /*
    this end() will point to the right after 50 memory location,
    to access the elemnet 50, you have to use it--;
    then it will move to the 50.
    */
    it--;
    cout << *(it) << " ";
    vector<int>::reverse_iterator rit_end = v.rend(); //{10,20,30,40,50}
    /*
    here end is 10 cz its reverse,
    so it pointing to reverse end(right after)
    */
    vector<int>::reverse_iterator rit = v.rbegin(); //{10,20,30,40,50}
    // reverse begin pointing to the 50. it++ will move 40. like begin() but it's a reverse iterator. 

    cout << v[0] << " " << v.at(0) << " " << endl; //{10,20,30,40,50} | v[0], v.at(0) both print first element (10) 
    cout << v.back() << " "; // prints last element (50)

    // printing vectors:
    // 1st way:
    //  for (vector<int>::iterator it=v.begin(); it !=v.end(); it++) {
    //     cout << *(it) << " ";
    // }

    // 2nd way:
    // for (auto it = v.begin(); it != v.end(); it++) { // according to the data dataType is automaticaly set
    //     cout << *(it) << " ";
    // }

    // 3rd way:
    // for(auto it : v) { // auto means iterate on the dataType
    //     cout << it << " ";
    // }

        // erase delete
        // {10, 20, 12, 23, 35};
        v.erase(v.begin() + 1); // removes 2nd element (20), it will erase the location address of those element
        v.erase(v.begin() + 2, v.begin() + 4); // removes elements at index 2 and 3 (12, 23) [start, end]

    // insert function
        vector<int> v(2, 300);
        v.insert(v.begin(), 100);        // {100, 300, 300}
        v.insert(v.begin() + 1, 1, 200); // {100, 200, 300, 300}
        v.insert(v.begin() + 1, 2, 150); // {100, 150, 150, 200, 300, 300

        vector<int> copy(2, 50); //{50, 50}
        v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 100, 150, 150, 200, 300, 300}

        //{10, 20}
        cout << v.size(); // 2

        //{10, 20}
        v.pop_back(); // {10}

        // swap function
        // v1 -> {10, 20}
        // v2 -> {30, 40}
        v1.swap(v2); // v1 -> {30, 40}. v2 -> {10, 20}

        v.clear(); // erase the entire vector
        cout << v.empty(); // if have any element -> false. if there is no element -> true
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    explainVector();
    return 0;
}
