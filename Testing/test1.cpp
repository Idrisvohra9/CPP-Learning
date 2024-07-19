#include <iostream>

using namespace std;

class Parent
{
public:
    int addition(int a, int b)
    {
        return a + b;
    }
};
class Child : public Parent
{
public:
    int addition(int a, int b)
    {
        return a - b;
    }
};

// The second method of object creation (Parent* p = new Parent()) is used for dynamic allocation.
// This allows for runtime polymorphism and flexibility in object lifetime management.
// It's particularly useful when dealing with inheritance and when the exact type
// of object needed may not be known until runtime.
int main()
{
    Child c = Child();
    cout << c.addition(20, 10) << endl;
    Parent *p = new Parent();
    cout << p->addition(10, 20) << endl;
    delete p; // Remember to delete dynamically allocated objects to prevent memory leaks
    return 0;
}