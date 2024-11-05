#include <iostream>
#include <cstring>
class Car {
public:
    char* brand;
    char* model;
    int year;
    double mileage;
    Car(const char* b, const char* m, int y, double mil) 
        : year(y), mileage(mil) {
        brand = new char[strlen(b) + 1];
        strcpy(brand, b);
        model = new char[strlen(m) + 1];
        strcpy(model, m);
    }
    // Copy constructor
    Car(const Car& other) 
        : year(other.year), mileage(other.mileage) {
        brand = new char[strlen(other.brand) + 1];
        strcpy(brand, other.brand);
        model = new char[strlen(other.model) + 1];
        strcpy(model, other.model);
    }
    // Destructor
    ~Car() {
        delete[] brand;
        delete[] model;
    }
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
    Car myCar("Volvo", "XC90", 2020, 15000.0);
    Car anotherCar(myCar);
    myCar.displayInfo();
    std::cout << "\nCopied car information:\n";
    anotherCar.displayInfo();
    return 0;
}
