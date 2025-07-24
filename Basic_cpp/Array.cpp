#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize input
    int size;
    cout << "Enter the array size: ";
    cin >> size;

    // 1D Array
    vector<int> arr(size);

    // Take input from the user for 1D array
    cout << "Enter " << arr.size() << " elements:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Display the 1D array
    cout << "\nThe elements of the 1D array are: ";
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;

    //===================================================================
    // 2D Array Initialization and Input (Jagged Array)
    vector<vector<int>> myArr = {
        {1, 2, 3},
        {4, 5},
        {7, 8, 9}
    };

    cout << "\nThe elements of the 2D array are:" << endl;
    int i = 0;
    while (i < myArr.size()) {
        int j = 0;
        while (j < myArr[i].size()) {
            cout << myArr[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    //===================================================================
    // 3D Array Initialization
    vector<vector<vector<int>>> threeD = {{{10}, {20, 30}, {40}}};

    // Dynamic Array Input
    int sc;
    cout << "\nEnter the size of the dynamic array: ";
    cin >> sc;

    vector<int> dArr(sc);
    cout << "Enter " << sc << " elements for the dynamic array:" << endl;
    for (int j = 0; j < sc; j++) {
        cout << "Element " << (j + 1) << ": ";
        cin >> dArr[j];
    }

    cout << "\nThe elements of the dynamic array are: ";
    for (int element : dArr) {
        cout << element << " ";
    }
    cout << endl;

    //====================================================================
    // 2D Array (dynamic size input)
    int rows, cols;
    cout << "\nEnter the number of rows for the 2D array: ";
    cin >> rows;
    cout << "Enter the number of columns for the 2D array: ";
    cin >> cols;

    vector<vector<int>> array(rows, vector<int>(cols));

    cout << "Enter the elements of the 2D array:" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << "Enter element at [" << r << "][" << c << "]: ";
            cin >> array[r][c];
        }
    }

    cout << "\nThe 2D array is:" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << array[r][c] << " ";
        }
        cout << endl;
    }

    //=====================================================================
    // Jagged 3D Array
    vector<vector<vector<int>>> jagged3D = {
        {
            {1, 2},
            {3, 4, 5}
        },
        {
            {6, 7, 8, 9}
        }
    };

    for (int a = 0; a < jagged3D.size(); a++) {
        cout << "Block " << a << ":" << endl;

        for (int j = 0; j < jagged3D[a].size(); j++) {
            for (int k = 0; k < jagged3D[a][j].size(); k++) {
                cout << jagged3D[a][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
