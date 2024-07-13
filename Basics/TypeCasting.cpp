#include <iostream>

int main() {
    // Implicit type casting
    std::cout << "Implicit type casting:" << std::endl;
    int intNum = 10;
    double doubleNum = intNum; // Implicit casting from int to double
    std::cout << "int to double: " << doubleNum << std::endl;

    // Explicit type casting
    std::cout << "\nExplicit type casting:" << std::endl;
    
    // C-style cast
    double pi = 3.14159;
    int intPi = (int)pi; // C-style cast
    std::cout << "C-style cast (double to int): " << intPi << std::endl;

    // static_cast
    float floatNum = 5.67f;
    int roundedNum = static_cast<int>(floatNum);
    std::cout << "static_cast (float to int): " << roundedNum << std::endl;

    // dynamic_cast (used for polymorphic classes, demonstrated with a simple example)
    class Base { public: virtual ~Base() {} };
    class Derived : public Base {};
    Base* basePtr = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    std::cout << "dynamic_cast (Base* to Derived*): " << (derivedPtr ? "Successful" : "Failed") << std::endl;
    delete basePtr;

    // const_cast (removes const qualifier)
    const int constNum = 42;
    int* nonConstPtr = const_cast<int*>(&constNum);
    std::cout << "const_cast (const int* to int*): " << *nonConstPtr << std::endl;

    // reinterpret_cast (converts between unrelated pointer types)
    int intValue = 0x41424344;
    char* charPtr = reinterpret_cast<char*>(&intValue);
    std::cout << "reinterpret_cast (int* to char*): " << *charPtr << *(charPtr + 1) << *(charPtr + 2) << *(charPtr + 3) << std::endl;

    return 0;
}
