#include <iostream>
#include <string>
#include "units.h"

using namespace std;
int main() {
    while (true) {
        string category;
        cout << "Enter the category of units you want to convert (temperature, length, weight, time): ";
        cin >> category;

        if (category == "temperature") {
            string unitFrom, unitTo;
            double value;

            cout << "Enter the unit to convert from (C, F, K): ";
            cin >> unitFrom;

            cout << "Enter the value to convert: ";
            cin >> value;

            cout << "Enter the unit to convert to (C, F, K): ";
            cin >> unitTo;

            TemperatureConverter converter;
            double convertedValue = converter.convert(value, unitFrom, unitTo);
            cout << value << " " << unitFrom << " equals " << convertedValue << " " << unitTo << endl;
            char choice;
            cout << "Do you want to end the program? (Y/N): ";
            cin >> choice;
            choice = toupper(choice);
            if (choice == 'Y') {
                break;
            }
            else {
                system("cls");
            }
        }
        else if (category == "length") {
            string unitFrom, unitTo;
            double value;

            cout << "Enter the unit to convert from (m, cm, ft, in): ";
            cin >> unitFrom;

            cout << "Enter the value to convert: ";
            cin >> value;

            cout << "Enter the unit to convert to (m, cm, ft, in): ";
            cin >> unitTo;

            LengthConverter converter;
            double convertedValue = converter.convert(value, unitFrom, unitTo);
            cout << value << " " << unitFrom << " equals " << convertedValue << " " << unitTo << endl;
            char choice;
            cout << "Do you want to end the program? (Y/N): ";
            cin >> choice;
            choice = toupper(choice);
            if (choice == 'Y') {
                break;
            }
            else {
                system("cls");
            }
        }
        else if (category == "weight") {
            string unitFrom, unitTo;
            double value;

            cout << "Enter the unit to convert from (kg, g, lb, oz): ";
            cin >> unitFrom;

            cout << "Enter the value to convert: ";
            cin >> value;

            cout << "Enter the unit to convert to (kg, g, lb, oz): ";
            cin >> unitTo;

            WeightConverter converter;
            double convertedValue = converter.convert(value, unitFrom, unitTo);
            cout << value << " " << unitFrom << " equals " << convertedValue << " " << unitTo << endl;
            char choice;
            cout << "Do you want to end the program? (Y/N): ";
            cin >> choice;
            choice = toupper(choice);
            if (choice == 'Y') {
                break;
            }
            else {
                system("cls");
            }
        }
        else if (category == "time") {
            string unitFrom, unitTo;
            double value;

            cout << "Enter the unit to convert from (s, min, h): ";
            cin >> unitFrom;

            cout << "Enter the value to convert: ";
            cin >> value;

            cout << "Enter the unit to convert to (s, min, h): ";
            cin >> unitTo;

            TimeConverter converter;
            double convertedValue = converter.convert(value, unitFrom, unitTo);
            cout << value << " " << unitFrom << " equals " << convertedValue << " " << unitTo << endl;
        }
        else {
            cerr << "Invalid category: " << category << endl;
            return 1;
        }

        char choice;
        cout << "Do you want to end the program? (Y/N): ";
        cin >> choice;
        choice = toupper(choice);
        if (choice == 'Y') {
            break;
        }
        else {
            system("cls");
        }
    }

    return 0;
}
