// Student Grade Table
#include <iostream>
using namespace std;


int main() {
int grades[3][4] = {
    {90, 85, 76}, 
    {43, 65,88},
    {12, 44, 65}
};

for (int i = 0; i < 2; i++) {
    int sum = 0;
    cout << "Student " << (i + 1) << ": ";
    for (int j = 0; j < 3; j++) {
        cout << grades[i][j] << " ";
        sum += grades[i][j];
    }
    double averages = static_cast<double>(sum) / 4;
    cout << "| Avg: " << averages << endl;
}


return 0;
}