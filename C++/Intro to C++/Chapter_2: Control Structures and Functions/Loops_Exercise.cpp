// Sum of Even Numbers
#include "iostream"
using namespace std;

int main() {

    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        if ( i % 2 != 0) continue; // This checks if number is even
        sum += i;
    }
    cout << "Sum of numbers 1 - 10 are: " << sum << endl;


    return 0;
}