#include <iostream>
using namespace std;

int main() {
    // for loops:
    /*
        Syntax:
        for (statement 1; statement 2; statement 3) {
            // code block to be executed
        }
    */

    //=================================================================

    // for each loop
    /*
        Syntax:
        for(DataTypes Variable : VariableOfElements) {
            // printing
        }
    */

    //=================================================================
    // Q: Print numbers from 1 to 5
    for (int count = 1; count <= 5; count++) {
        cout << count << endl;
    }

    //=================================================================
    // Q: Print numbers from 1 to n
    int n;
    cin >> n;
    for (int num = 1; num <= n; num++) {
        cout << num << " ";
    }
    cout << endl;

    //=================================================================
    // While Loops:
    /*
        Syntax:
        while (condition) {
            // code block to be executed
        }
    */

    int count = 1;
    while (count <= 5) {
        cout << count << endl;
        count++;

        //=================================================================
        // do while loops:
        /*
            Syntax:
            do {

            } while (Condition)
        */

        int i = 1;
        do {
            cout << n << endl;
            n++;
        } while (i < 5);
    }

    //=================================================================
    // Enhanced for loop
    /*
        for (dataType item : arrayOrCollection) {

        }
    */
    int numbers[] = {10, 20, 30, 40, 50};

    // Enhanced for loop to iterate through the array
    for (int num : numbers) {
        cout << num << endl;
    }

    return 0;
}
