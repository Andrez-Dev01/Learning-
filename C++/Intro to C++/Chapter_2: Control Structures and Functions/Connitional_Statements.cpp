// Condition Statements - makes your program behave differently depending on different inputs and conditions 
#include "iostream"

int main() {

    // The if Statement - only executes if the statement is true
    /* if (condition) {
        code to execute if true
    }*/

    int age = 20;
    if (age >= 18) {
        std::cout << "You are an adult" << std::endl;
    }

    // if-else Statement - if the condition is false else will block runs
    int toys = 20;
    if (toys >= 5) {
        std::cout << "You have to many toys!" << std::endl;
    } else {
        std::cout << "You have enough toys." << std::endl;
    }

    // else-if Statement - When there are multiple conditions to check
    int score = 85;
    if (score >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else {
        std::cout << "Grade: F" << std::endl;
    }

    // The switch Statement - comparing a variable to several constant values especially when dealing with menu systems or enums
    /*switch (condition) {
        case value1:
            code
            break;
        case value2:
            code
            break;
        default:
            code if none match
    }*/
    int day = 3;
    switch (day) {
        case 1: 
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        default:
            std::cout << "Invalid day" << std::endl;
    }

    return 0;
}