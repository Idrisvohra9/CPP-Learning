#include <iostream>
#include <string>
using namespace std;
// Encapsulation is one of the fundamental principles of object-oriented programming (OOP). It involves bundling the data (variables) and the methods (functions) that operate on the data into a single unit, known as a class. Encapsulation also restricts direct access to some of an object's components, which is a means of preventing accidental interference and misuse of the data.
// Definition of the class 'Person'
class Person
{
private:
    // Private member variables
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Public method to set the name
    void setName(string n)
    {
        name = n;
    }

    // Public method to get the name
    string getName()
    {
        return name;
    }

    // Public method to set the age
    void setAge(int a)
    {
        if (a > 0)
        {
            age = a;
        }
        else
        {
            cout << "Age cannot be negative!" << endl;
        }
    }

    // Public method to get the age
    int getAge()
    {
        return age;
    }

    // Public method to display the details of the person
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Creating an object of the class 'Person'
    Person person1("John Doe", 30);

    // Displaying initial details of person1
    person1.displayInfo();

    // Modifying person1's details using public methods
    person1.setName("Jane Doe");
    person1.setAge(25);

    // Displaying modified details of person1
    person1.displayInfo();

    // Attempting to set an invalid age
    person1.setAge(-5);

    return 0;
}
