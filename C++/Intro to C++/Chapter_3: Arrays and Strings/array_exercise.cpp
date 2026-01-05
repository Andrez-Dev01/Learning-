// Average of Scores
#include <iostream>
using namespace std;

double average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {

    int scores[] = {80, 54,23, 65, 86, 99};
    int n = sizeof(scores) / sizeof(scores[0]);
    cout << "Average: " << average(scores, n) << endl;


    return 0;
}