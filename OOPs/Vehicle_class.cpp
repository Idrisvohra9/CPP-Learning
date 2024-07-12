#include <string>
#include <iostream>
#include "Operations_class.cpp"

// Define a class named Vehicle
class Vehicle: public Operations
{
private:
    // Private member variables to store vehicle details
    std::string company;
    std::string model;
    int year;
    double mileage;

public:
    Vehicle() {}
    // Constructor to initialize member variables
    Vehicle(std::string company, std::string model, int year, double mileage)
    {
        this->company = company;
        this->model = model;
        this->year = year;
        this->mileage = mileage;
    }

    // Destructor (empty)
    ~Vehicle() {}

    // Getter functions to retrieve member variable values
    std::string getCompany()
    {
        return company;
    }

    std::string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    double getMileage()
    {
        return mileage;
    }

    // Setter functions to modify member variable values
    void setCompany(std::string company)
    {
        this->company = company;
    }

    void setModel(std::string model)
    {
        this->model = model;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void setMileage(double mileage)
    {
        this->mileage = mileage;
    }
};
int main()
{
    // Using the constructor to initialize values:
    Vehicle vehicle1("Toyota", "Camry", 2015, 25000.0);
    std::cout << vehicle1.getCompany() << std::endl;
    std::cout << vehicle1.getModel() << std::endl;
    std::cout << vehicle1.getYear() << std::endl;
    std::cout << vehicle1.getMileage() << std::endl;
    // We can also use the empty constructor (also known as default constructor) and set the value manually if we want:
    Vehicle vehicle2;
    vehicle2.setCompany("Suzuki");
    std::cout << vehicle2.getCompany() << std::endl;
    // Calling the functions of the super class or parent class
    vehicle2.accelerate();
    vehicle2.brake();
    vehicle2.fuel("gas");
    vehicle2.fuel("petrol");
    return 0;
}