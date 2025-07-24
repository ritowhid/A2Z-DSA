#include <bits/stdc++.h>
using namespace std;

// Pattern 1: Square Fill Pattern
void pattern1(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2: Right Half Pyramid
void pattern2(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3: Right-Angle Number Increasing Pyramid
void pattern3(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 4: Right-Angle Number Increasing Pyramid With Repeating Digits
void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

// Pattern 5: Reverse Right Half Pyramid
void pattern5(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 6: Reverse Right-Angle Number Increasing Pyramid
void pattern6(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 7: Reverse Right-Angle Number Increasing Pyramid With Repeating Digits
void pattern7(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i+1; j++) {
            cout << i;
        }
        cout << endl;
    }
}

// Pattern 8: Triangle Star Pattern
void pattern8(int n) {
    for (int i=0; i<n; i++) {
        // Printing Space
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        // Printing Star
        for (int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        // Printing Space
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 9: Reverse Triangle Star Pattern
void pattern9(int n) {
    for (int i=0; i<n; i++) {
        // Printing Space
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        // Printing Star
        for (int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }
        // Printing Space
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 10: Diamond
void pattern10(int n) {
    for (int i=0; i<n; i++) {
        // Printing Space
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        // Printing Star
        for (int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        // Printing Space
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++) {
        // Printing Space
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        // Printing Star
        for (int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }
        // Printing Space
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 11: Right Half Diamond
void pattern11(int n) {
    for (int i=1; i<=2*n-1; i++) {
        int star = i;
        if (i > n) star = 2*n-i;
        for (int j=1; j<=star; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 12: Zero-One Triangle
void pattern12(int n) {
    for (int i=0; i<n; i++) {
        int start = 1;
        if (i%2==0) start=1;
        else start=0;
        for (int j=0; j<=i; j++) {
            cout << start << " ";
            start = 1-start;
        }
        cout << endl;
    }
}

// Pattern 13:
void pattern13(int n) {
    for (int i=1; i<=n; i++) {
        // Numbers
        for (int j=1; j<=i; j++) {
            cout << j;
        }
        // Space
        for (int j=1; j<=2*(n-i); j++) {
            cout << " ";
        }
        // Numbers
        for (int j=i; j>=1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 14: Right Half Number Changing Pyramid
void pattern14(int n) {
    int num=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

// Pattern 15: Right Half Character Pyramid
void pattern15(int n) {
    for (int i=0; i<n; i++) {
        for (char ch='A'; ch<='A'+i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Pattern 16: Reverse Right Half Character Pyramid
void pattern16(int n) {
    for (int i=0; i<=n; i++) {
        for (char ch='A'; ch<='A'+(n-i-1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Pattern 17: Right Half Character Pyramid With Increasing
void pattern17(int n) {
    for (int i=0; i<=n; i++) {
        char ch = (char) ('A' + i);
        for (int j=0; j<=i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Pattern 18: Character Triangle
void pattern18(int n) {
    for (int i=0; i<n; i++) {
        // Printing Space
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        // Printing Char
        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for (int j=1; j<=2*i+1; j++) {
            cout << ch;
            if (j<=breakPoint) ch++;
            else ch--;
        }
        // Printing Space
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

// Pattern 19: Reversed Pyramid of Characters
void pattern19(int n) {
    for (int i=0; i<n; i++) {
        for (char ch = (char) ('E' - i); ch<= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// Pattern 20: Mirrored Hourglass Pattern
void pattern20(int n) {
    int iniS = 0; // Initial space count, which will increment by 2 in each iteration
    for (int i=0; i<n; i++) {
        // Print Left Stars
        for (int j=1; j<=n-i; j++) {
            cout << "*";
        }
        // Print Spaces in the Middle
        for (int j=0; j<iniS; j++) {
            cout << " ";
        }
        // Print Right Stars
        for (int j=1; j<=n-i; j++) {
            cout << "*";
        }
        iniS += 2; // Increase Spaces for the Next Row
        cout << endl; // Move to the Next Line after Printing One Row
    }
    iniS = 2*(n-1); // Initial Space Count, Which Decreases by 2 in Each Iteration
    for (int i=0; i<n; i++) {
        // Print Left Stars
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        // Print Spaces in the Middle
        for (int j=0; j<iniS; j++) {
            cout << " ";
        }
        // Print Right Stars
        for (int j=0; j<=i; j++) {
            cout << "*";
        }
        iniS -= 2; // Decrease Spaces for the Next Row
        cout << endl; // Move to the Next Line after Printing One Row
    }
}

// Pattern 21: Horizontal Hourglass Pattern
void pattern21(int n) {
    int inis = 2 * (n - 1); // Initial space count for the upper part
    for (int i = 0; i < n; i++) { // Upper half of the pattern
        // Print left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        // Print Spaces in the Middle
        for (int j = 0; j < inis; j++) {
            cout << " ";
        }
        // Print Right Stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        inis -= 2; // Decrease spaces for the next row
        cout << endl; // Move to the next line
    }
    inis = 2; // Reset space count for the lower part
    // Lower half of the pattern (reverse of the upper part)
    for (int i = n - 1; i > 0; i--) {
        // Print left stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        // Print spaces in the middle
        for (int j = 0; j < inis; j++) {
            cout << " ";
        }
        // Print right stars
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        inis += 2; // Increase spaces for the next row
        cout << endl; // Move to the next line
    }
}

// Pattern 22: Hollow Square
void pattern22(int n) {
    for (int i=0; i<n; i++) { // Outer Loop for Rows
        for (int j=0; j<n; j++) { // Inner Loop for Columns
            // Print '*' for the border (first row, last row, first column, or last column)
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Pattern 23: Square Matrix with Concentric Numbers
void pattern23(int n) {
    int size=2*n-1;
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            // Calculate the value to be printed based on the minimum distance from the edge
            int num = n - min(min(i, j), min(size - i - 1, size - j - 1));
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern23(n);
    return 0;
}