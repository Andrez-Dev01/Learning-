// Multidimensional arrays are arrays we can represent as a grid like a chessboard. Often a 2d array is most common which nut are referred as matrices or tables
#include <iostream>
using namespace std;


int main () {

    // 1. Declaring an Initializing a 2d array
    // type arrayName[rows] [columns];

    // Declaring with out initializing
    int grades[3][4];

    /// Declaring and Initializing
    int tables[2][3] = {
        {90, 23, 56}, {77, 54, 65,}
    };
    
    // 2. Accessing and Modifing Elements
    cout << tables[0][1] << endl;
    tables[1][2] = 84;
    cout << tables[1][2] << endl;

    // 3. Iterating through a 2D array
    int chairs[2][3] = {
        {12, 34, 56,}, {43, 65, 13,}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "row: " << chairs[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}