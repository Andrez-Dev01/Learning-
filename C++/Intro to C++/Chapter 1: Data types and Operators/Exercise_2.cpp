// Exercise 2: Type Conversion real world application
//Percentage Calculation
#include <iostream>

int main() {

    int score = 17;
    int total = 20;

    double percentage = static_cast<double>(score) / total * 100;

    std::cout << "Score: " << percentage << "%" << std::endl;

    return 0;
}