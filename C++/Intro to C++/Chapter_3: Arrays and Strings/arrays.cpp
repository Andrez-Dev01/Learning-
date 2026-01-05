// Arrays - a fixed size collection of elements of the same data type in a contiguous memory location
#include <iostream>
using namespace std;


// 4.
void printArray(int arr[], int size) {
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main() {

    // 1. Declaring an array
    // type arrayName[size];

    // Declaring without initializing
    int numbers[5]; // this holds 5 integers

    // Declaring and initializing
    int scores[5] = {90, 85, 77, 92, 88};

    // Letting the compiler count elements
    int books[] = {12, 45, 67};

    // 2. Accessing elements

    // Using zero based indexing
    cout << scores[0] << endl;
    cout << scores[4] << endl;

    // Changing a value
    scores[1] = 95;
    cout << scores[1] << endl;

    // 3. Iterating over an array

    // Using a loop to process all elements
    for (int i = 0; i < 5; i++) {
        cout << "Score " << i << ": " << scores[i] << endl;
    }

    // 4. Using arrays in Functions
    int nums[] = {10, 20, 30, 40};
    printArray(nums, 4);

    // 5. Calculate Array Size
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  // Total bytes / bytes per element
    cout << "Array size: " << size << " elements" << endl;
    return 0;
}