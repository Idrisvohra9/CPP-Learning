#include <iostream>

class Operations
{
private:
    /* data */
public:
    Operations() {}

    // Additional functionality
    void accelerate()
    {
        std::cout << "Vroom vrooom!" << std::endl;
    }
    void brake()
    {
        std::cout << "Vehicle stopped with screeching sound" << std::endl;
    }
    void fuel(std::string fuelType)
    {
        if (fuelType == "electricity" or fuelType == "gas")
        {
            std::cout << "Vehicle rejects the fuel " << fuelType << std::endl;
        }
        else
        {
            std::cout << "Vehicle accepts the fuel " << fuelType << std::endl;
        }
    }
};
