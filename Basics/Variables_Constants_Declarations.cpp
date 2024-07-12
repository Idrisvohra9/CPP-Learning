#include <string>
int main()
{
    // Declaring variables of different data types
    int myInteger = 42;      // Integer variable
    float myFloat = 3.14;    // Floating-point variable
    double myDouble = 2.718; // Double-precision floating-point variable
    char myChar = 'A';       // Character variable
    bool myBool = true;      // Boolean variable
    std::string myString = "Hello, World!"; // String variable

    // Declaring constants
    const std::string myString2 = "Hello, c++!"; // String constant
    const int CONSTANT_VALUE = 100; // Integer constant
    const float PI = 3.14159;       // Floating-point constant

    // Properties of variables and constants
    // Variables can be reassigned new values
    myInteger = 99;

    // Constants cannot be reassigned new values
    // PI = 3.0; // This will cause a compile-time error

    // Variables have a scope (local or global)
    // Constants are typically defined with global scope
}
