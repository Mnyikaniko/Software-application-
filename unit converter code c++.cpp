

#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

class UnitConverter {
public:
    void showMenu() {
        cout << "\nUnit Converter\n";
        cout << "1. Length Conversion (meters <-> kilometers)\n";
        cout << "2. Weight Conversion (grams <-> kilograms)\n";
        cout << "3. Volume Conversion (liters <-> milliliters)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
    }

    void convertLength() {
        double meters, kilometers;
        int choice;
        cout << "\nLength Conversion:\n";
        cout << "1. Meters to Kilometers\n";
        cout << "2. Kilometers to Meters\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter length in meters: ";
            cin >> meters;
            kilometers = meters / 1000.0;
            cout << fixed << setprecision(2) << meters << " meters = " << kilometers << " kilometers\n";
        } else if (choice == 2) {
            cout << "Enter length in kilometers: ";
            cin >> kilometers;
            meters = kilometers * 1000.0;
            cout << fixed << setprecision(2) << kilometers << " kilometers = " << meters << " meters\n";
        } else {
            cout << "Invalid choice!\n";
        }
    }

    void convertWeight() {
        double grams, kilograms;
        int choice;
        cout << "\nWeight Conversion:\n";
        cout << "1. Grams to Kilograms\n";
        cout << "2. Kilograms to Grams\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter weight in grams: ";
            cin >> grams;
            kilograms = grams / 1000.0;
            cout << fixed << setprecision(2) << grams << " grams = " << kilograms << " kilograms\n";
        } else if (choice == 2) {
            cout << "Enter weight in kilograms: ";
            cin >> kilograms;
            grams = kilograms * 1000.0;
            cout << fixed << setprecision(2) << kilograms << " kilograms = " << grams << " grams\n";
        } else {
            cout << "Invalid choice!\n";
        }
    }

    void convertVolume() {
        double liters, milliliters;
        int choice;
        cout << "\nVolume Conversion:\n";
        cout << "1. Liters to Milliliters\n";
        cout << "2. Milliliters to Liters\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter volume in liters: ";
            cin >> liters;
            milliliters = liters * 1000.0;
            cout << fixed << setprecision(2) << liters << " liters = " << milliliters << " milliliters\n";
        } else if (choice == 2) {
            cout << "Enter volume in milliliters: ";
            cin >> milliliters;
            liters = milliliters / 1000.0;
            cout << fixed << setprecision(2) << milliliters << " milliliters = " << liters << " liters\n";
        } else {
            cout << "Invalid choice!\n";
        }
    }
};

int main() {
    UnitConverter converter;
    int choice;

    do {
        converter.showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                converter.convertLength();
                break;
            case 2:
                converter.convertWeight();
                break;
            case 3:
                converter.convertVolume();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
