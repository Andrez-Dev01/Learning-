// In C++ text data will be handled by strings (sequence of characters) when you have to read, compare and manipulate strings (user names, address, password or file path). 
/* We can use strings in C++ by two different ways
 * 1. Traditional C style strings (char[])
 * 2. Modern way (std::string)*/

 #include <iostream>
 #include <cstring>
 #include <string>

 int main() {

    // 1. C Style Strings char[] - an array of characters that end with null terminator (\0)
    char greeting[] = "Hello"; // It actually stores {'H, 'E', 'L', 'L', 'O', '\0'}
    std::cout << greeting << std::endl;
    /* Problems with char[]
     * Fixed size
     * Can't handle spaces well
     * Prone to buffer overflows
     * Requires c string functions for operations
     */
     // Example with cstring
    char s1[10] = "Hi";
    char s2[10] = "There";
    strcat(s1, s2);
    std::cout << s1 << std::endl;

    // 2. C++ Strings (std::string) method - from the <string> library it's a more intuitive, flexible, and safe way to work with text
    
    //Declaration
    std::string welcome = "Hello";

    // Operations
    std::string name = "Andrez";
    std::cout << "Hello, " + name + "!" << std::endl;

    //Reading full lines with spaces using getline()
    std::string fullName;
    getline(std::cin, fullName);
    std::cout << "Hello, " + fullName << std::endl;

    return 0;
 }