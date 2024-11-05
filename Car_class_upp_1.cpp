#include <iostream>
#include <string>

class Car {
public:
    // Publika medlemsvariabler
    std::string brand;
    std::string model;
    int year;
    double mileage;

    // Konstruktör
    Car(std::string b, std::string m, int y, double mil) 
        : brand(b), model(m), year(y), mileage(mil) {}

    // Publika metoder
    void drive(double distance) {
        mileage += distance;
    }

    void displayInfo() const {
        std::cout << "Märke: " << brand << "\n"
                  << "Modell: " << model << "\n"
                  << "Årsmodell: " << year << "\n"
                  << "Mätarställning: " << mileage << " km\n";
    }

    int getYear() const {
        return year;
    }

    double getMileage() const {
        return mileage;
    }
};

int main() {
    // Skapa ett objekt av klassen Car
    Car myCar("Volvo", "XC90", 2020, 15000.0);

    // Visa information om bilen
    myCar.displayInfo();

    // Kör en viss sträcka
    myCar.drive(250.5);

    // Visa den uppdaterade informationen
    std::cout << "\nEfter att ha kört 250.5 km:\n";
    myCar.displayInfo();

    return 0;
}
