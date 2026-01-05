/*Guess the Number*/
#include <iostream>


int main() {

    int guess;
    int secret = 7;


    std::cout << "Please guess the number I'm thinking of between 1-10: " << std::endl;

    std::cin >> guess;
    
    if (guess == secret) {
        std::cout << "You guessed correct!" << std::endl;
    } else if (guess < secret) {
        std::cout << "You guessed to low." << std::endl;
    } else {
        std::cout << "You guessed to high." << std::endl;
    }

    return 0;
}
