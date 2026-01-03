#include <iostream>


/* Exercise 1:
 * Ask for two integers
 * Display the sum, difference, product, and quotient of the two integers
 * Tell the user if the first number is greater  than the second number
 */

int main() {
    
    int num1, num2;
    std::cout << "Please enter two integers: ";
    std::cin >> num1 >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;
    std::cout << "The difference of " << num1 << " and " << num2 << " is " << difference << std::endl;
    std::cout << "The product of " << num1 << " and " << num2 << " is " << product << std::endl;
    std::cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient << std::endl;

    if (num1 > num2) {
        std::cout << "The first number is greater than the second number" << std::endl;
    } else {
        std::cout << "The second number is greater than the first number" << std::endl;
    }

    
    std::cout << "------------------------------------------------------------------------------------------------" << std::endl;
    
    
    return 0;
}