// Loops - iteration structures which allow you to repeat blocks of code
#include "iostream"
using namespace std;

int main () {

    // For Loops - when you know how many times you want repeat a block
    /* for (initialization; condition; update) {
        code to repeat
    }*/

    // Example: Print from 1 - 5
    for (int i =1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }


    // While Loops - when we don't know the amount of repetition and it will check the condition before each iteration
    /* while (condition) {
        code to repeat
    }*/
    // Example: User input until correct answer
    int guess = 0;
    while (guess != 7) {
        cout << "Please guess the number: " << endl;
        cin >> guess;
    }
    cout << "Correct" << endl;

    // Do-While Loops - similar to while loop but we are guaranteeing the code runs onces because we check the condition after the block
    /* do {
    code here
    }while (condition)*/
    // Example: Menu Selection
    int choice;
    do {
        cout << "1. Start\n2. Help\n3. Exit\nChoose: ";
        cin >> choice;
    } while (choice != 3);

    // Break and Continue Statements 
    // Break - Exit loop early
    for (int j = 1; j <= 10; j++) {
        if (j == 5) {
            break;
        }
        cout << j << endl;
    }

    // Continue -skip the rest of the body and go to next iteration
    for (int k = 1; k <= 5; k++) {
        if (k == 3) {
            continue;
        }
        cout << k << endl;
    }


    return 0;
}