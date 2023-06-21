// Create a class called carpark that has int data member for car id,
// int data member for charge/hour, and float data member for the parked
// time. Make functions to set data members and show the charges and
// parked hours of the corresponding car id. Make functions for setting
// and showing the data members. Member function should be called from other functions.

#include <iostream>

class CarPark {
private:
    int carId;
    int chargePerHour;
    float parkedTime;
public:
    void setCarId(int id) {
        carId = id;
    }
    void setChargePerHour(int charge) {
        chargePerHour = charge;
    }
    void setParkedTime(float time) {
        parkedTime = time;
    }
    void showCharges() {
        std::cout << "Car ID: " << carId << std::endl;
        std::cout << "Charge per hour: " << chargePerHour << std::endl;
        std::cout << "Parked time: " << parkedTime << std::endl;
        std::cout << "Total charge: " << chargePerHour * parkedTime << std::endl;
    }
};


int main() {
    CarPark carPark;
    int id, charge, time;
    std::cout << "Enter car id: ";
    std::cin >> id;
    carPark.setCarId(id);
    std::cout << "Enter charge per hour: ";
    std::cin >> charge;
    carPark.setChargePerHour(charge);
    std::cout << "Enter parked time: ";
    std::cin >> time;
    carPark.setParkedTime(time);
    carPark.showCharges();
    return 0;
}
