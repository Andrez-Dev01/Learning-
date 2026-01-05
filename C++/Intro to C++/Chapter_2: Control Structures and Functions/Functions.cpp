// Functions - allow you  to encapsulate code, resuse code and organize your program into manageble parts.
#include <iostream>
using namespace std;

// 1. Basic Function Structure
/* returnType functionName(parameters) {
code
return value; (optional)
}*/
// Adding two numbers
int sum(int a, int b) {
    return a + b;
}

// 2. Declaration Functions (Prototype) - declaring a function before main and defining it after
int multiply(int x, int y); 


// 4. Functions with no return (void) - this to just perform an action not return a value
void greeting() {
    cout << "Hello, welcome to functions!" << endl;
}

/* 5. Global vs Local variables
 * Local - when they are declared inside the function and only exist when running the function.
  * Global - when they are declared outside all functions, usually on top of the file which can be accessed across any function.
  */
// Local Variables
void show() {
    int x = 10;
    cout << x << endl;
}
//Global Variables
int counter = 0;

void increment() {
    cout << ++counter;
}

// 6. We can call functions as many times needed
// using the increment function

int main() {
    
    int result = sum(5, 3);
    cout << "Sum is: " << result << endl;
    
    // 2. You can call multiply here even though it's defined after main()
    int product = multiply(4, 5);
    cout << "Product is: " << product << endl;
    
    // 4. Calling the void function
    greeting();

    // 5. Local
    show();

    // 5. Global
    increment();

    // 6. 
    for (int i = 1; i <=  5; i++) {
        increment();
    }
    return 0;
}

// 2. Function definition - this is where the actual implementation goes
int multiply(int x, int y) {
    return x * y;
}