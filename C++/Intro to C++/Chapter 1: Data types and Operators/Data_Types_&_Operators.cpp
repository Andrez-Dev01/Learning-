#include <iostream>
using namespace std; // This is a namespace declaration that allows us to use the std namespace without having to prefix it with std:: (ex: std::cout instead of cout)


int main() {


    /* Data Types:
    * int - integers : can store whole numbers with a 4 byte storage space
    * float - floating-point numbers : can store decimal numbers with a 4 byte storage space
    * double - double-precision floating-point numbers : can store decimal numbers with a 8 byte storage space
    * long double - long double-precision floating-point numbers : can store decimal numbers with a 16 byte storage space
    * char - characters : can store single characters with a 1 byte storage space
    * bool - boolean values : can store true or false with a 1 byte storage space
    */
    cout << "Look at Exercise_1.cpp for practice on data types and operators" << endl;
    // Integer Data Types
    cout << "------------------------------------------------------------------------------------------------" << endl;
    cout << "Integer Data Types" << endl;
    int age = 25;
    int year = 2026;
    int days = 365;

    cout << "In the year " << year << " you will be " << age << " years old and that is only " << days << " days away!" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Floating-Point Data Types
    cout << "Floating-Point Data Types" << endl;
    float price = 10.99;
    double gpa = 3.8;
    long double large = 1.2345678901234567890;

    cout << "The price of the item is $" << price << " and the GPA is " << gpa << " and the large number is " << large << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Double Data Types
    cout << "Double Data Types" << endl;
    double pi = 3.14159;
    double mass = 6.67430e-11;
    double temperature = 98.6f; // float literal

    cout << "The value of pi is " << pi << " and the mass is " << mass << " and the temperature is " << temperature << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Character Data Types
    cout << "Character Data Types" << endl;
    char grade = 'A';
    char letter = 'z';

    cout << "The grade is " << grade << " and the letter is " << letter << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Boolean Data Types
    cout << "Boolean Data Types" << endl;
    bool isStudent = true;
    bool isTeacher = false;

    cout << "The student is " << isStudent << " and the teacher is " << isTeacher << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Checking the size of the data types
    cout << "Checking the size of the data types" << endl;
    cout << "The size of int is " << sizeof(int) << " bytes" << endl;
    cout << "The size of float is " << sizeof(float) << " bytes" << endl;
    cout << "The size of double is " << sizeof(double) << " bytes" << endl;
    cout << "The size of long double is " << sizeof(long double) << " bytes" << endl;
    cout << "The size of char is " << sizeof(char) << " bytes" << endl;
    cout << "The size of bool is " << sizeof(bool) << " bytes" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Signed and Unsigned Data Types
    cout << "Signed and Unsigned Data Types : signed can store positive and negative numbers, unsigned can only store positive numbers" << endl;
    signed int s_age = -25;
    unsigned int u_age = 25;

    cout << "The signed age is " << s_age << " and the unsigned age is " << u_age << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;   

    // Operators
    cout << "Operators:" << endl;
    cout << "Arithmetic Operators: +, -, *, /, %" << endl;
    int a = 10;
    int b = 20;
    int c = a + b;
    cout << "The sum of " << a << " and " << b << " is " << c << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Assignment Operators
    cout << "Assignment Operators: =, +=, -=, *=, /=, %=" << endl;
    int d = 10;
    d += 5;
    cout << "The value of d is " << d << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Comparison Operators
    cout << "Comparison Operators: ==, !=, >, <, >=, <=" << endl;
    int e = 10;
    int f = 20;
    bool g = e == f;
    cout << "The value of g is " << g << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Logical Operators
    cout << "Logical Operators: &&, ||, !" << endl;
    bool h = true;
    bool i = false;
    bool j = h && i;
    cout << "The value of j is " << j << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Increment and Decrement Operators
    cout << "Increment and Decrement Operators: ++, --" << endl;
    int k = 10;
    k++;
    cout << "The value of k is " << k << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;


    cout << "Look at Exercise_2.cpp for practice on type casting and type conversion" << endl;
    // Type Casting and Type Conversion
    cout << "Type Casting and Type Conversion" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    // Implicit Type Conversion (automatically converts one data type to another data type)
    cout << "Implicit Type Conversion" << endl;
    int x = 12;
    double y = x;
    cout << "The value of y is " << y << endl;

    int a1 = 5;
    float b1 = 3.5;
    float result = a1 + b1;
    cout << "The result is " << result << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Explicit Type Conversion (manually converts one data type to another data type)
    cout << "Explicit Type Conversion" << endl;
    double x1 = 9.7;
    int y1 = static_cast<int>(x1);
    cout << "The value of y1 is " << y1 << endl;

    int i1 = 10;
    double d1 = static_cast<double>(i1);
    cout << "The value of d1 is " << d1 << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // reinterpret_cast - reinterpret the bits of a data type to another data type
    cout << "reinterpret_cast" << endl;
    int i2 = 10;
    double d2 = reinterpret_cast<double&>(i2);
    cout << "The value of d2 is " << d2 << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;

    // Other Casting Operators
    cout << "Other Casting Operators" << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    // const_cast - cast away the constness of a data type
    cout << "const_cast" << endl;
    const int i3 = 10;
    int j3 = const_cast<int&>(i3);
    cout << "The value of j3 is " << j3 << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    // static_cast - cast a value to a different data type
    cout << "static_cast" << endl;
    int i4 = 10;
    double d4 = static_cast<double>(i4);
    cout << "The value of d4 is " << d4 << endl;
    cout << "------------------------------------------------------------------------------------------------" << endl;
    


    return 0;
}