#include <iostream>
// Using Namespace std means that the namespace std and the related classes and functionalities will be available directly
using namespace std;
// In C++, polymorphism is a core concept of object-oriented programming that allows objects of different classes to be treated as objects of a common base class.
class Animal
{
private:
    double limbs;
    string name;

public:
    // A method that could be overridden has to be declared with the keyword "virtual"
    virtual void makeSound()
    {
        cout << "The animal makes a sound." << endl;
    }

    void setLimbs(double limbs)
    {
        this->limbs = limbs;
    }
    double getLimbs()
    {
        return this->limbs;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    virtual string getDescription()
    {
        return this->name + " has " + to_string(this->limbs) + " limbs";
    }
};

// Extending the the class of Animal to Dog
class Dog : public Animal
{
public:
    // We are re-writing the original method by using the "override" keyword. This overrides the original function
    void makeSound() override
    {
        cout << "The dog barks." << endl;
    }
    void setLimbs(int limbs)
    {
        Animal::setLimbs(limbs);
    }
    string getDescription()
    {
        return "Dog: " + Animal::getDescription();
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "The cat meows." << endl;
    }
    string getDescription()
    {
        return "Cat: " + Animal::getDescription();
    }
};

int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->makeSound(); // Output: The dog barks.
    animal2->makeSound(); // Output: The cat meows.
    animal1->setLimbs(4);
    animal2->setLimbs(3);
    cout << animal1->getLimbs() << endl;
    animal1->setName("Johnny");
    animal2->setName("Bob");
    cout << animal1->getDescription() << endl;
    cout << animal2->getDescription() << endl;

    // 'delete' keyword is used to delete the reference to the variable from the memory and release the resources allocated by the instance
    delete animal1;
    delete animal2;

    return 0;
}
