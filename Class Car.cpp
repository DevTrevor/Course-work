#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;

    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }

    string getDetails() {
        string details = "Brand: " + brand + "\n";
        details += "Model: " + model + "\n";
        details += "Price: $"  "\n";
        details += "Mileage: "  " miles\n";
        return details;
    }

    int drive(int distance) {
        mileage += distance;
        return mileage;
    }

    int getMileage() {
        return mileage;
    }
};

int main() {

    Car myCar("Toyota", "Corolla", 20000, 5000);

    cout << myCar.getDetails() << endl;

    int newMileage1 = myCar.drive(150);
    cout << "After driving 150 miles, mileage: " << newMileage1 << " miles" << endl;

    int newMileage2 = myCar.drive(300);
    cout << "After driving 300 miles, mileage: " << newMileage2 << " miles" << endl;

    return 0;
}