#include <iostream>
#include <cstring>

class Car {
public:
    // Public member variables
    char* brand;
    char* model;
    int year;
    double mileage;

    // Constructor
    Car(const char* b, const char* m, int y, double mil) 
        : year(y), mileage(mil) {
        brand = new char[strlen(b) + 1];
        strcpy(brand, b);
        model = new char[strlen(m) + 1];
        strcpy(model, m);
    }

    // Destructor
    ~Car() {
        delete[] brand;
        delete[] model;
    }

    // Public methods
    void drive(double distance) {
        mileage += distance;
    }

    void displayInfo() const {
        std::cout << "Brand: " << brand << "\n"
                  << "Model: " << model << "\n"
                  << "Year: " << year << "\n"
                  << "Mileage: " << mileage << " km\n";
    }

    int getYear() const {
        return year;
    }

    double getMileage() const {
        return mileage;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Volvo", "XC90", 2020, 15000.0);

    // Display car information
    myCar.displayInfo();

    // Drive a certain distance
    myCar.drive(250.5);

    // Display the updated information
    std::cout << "\nAfter driving 250.5 km:\n";
    myCar.displayInfo();

    return 0;
}
