#include <iostream>
#include <string>
#include "units.h"
using namespace std;

double TemperatureConverter::convert(double value, const string& fromUnit, const string& toUnit) {
    if (fromUnit == "C" && toUnit == "F") {
        return (value * 9.0 / 5.0) + 32.0;
    }
    else if (fromUnit == "C" && toUnit == "K") {
        return value + 273.15;
    }
    else if (fromUnit == "F" && toUnit == "C") {
        return (value - 32.0) * 5.0 / 9.0;
    }
    else if (fromUnit == "F" && toUnit == "K") {
        return (value + 459.67) * 5.0 / 9.0;
    }
    else if (fromUnit == "K" && toUnit == "C") {
        return value - 273.15;
    }
    else if (fromUnit == "K" && toUnit == "F") {
        return (value * 9.0 / 5.0) - 459.67;
    }
    else {
        cerr << "Invalid temperature units: " << fromUnit << ", " << toUnit << endl;
        return 0.0;
    }
}

double LengthConverter::convert(double value, const string& fromUnit, const string& toUnit) {
    if (fromUnit == "m" && toUnit == "cm") {
        return value * 100.0;
    }
    else if (fromUnit == "cm" && toUnit == "m") {
        return value / 100.0;
    }
    else if (fromUnit == "ft" && toUnit == "m") {
        return value * 0.3048;
    }
    else if (fromUnit == "m" && toUnit == "ft") {
        return value / 0.3048;
    }
    else if (fromUnit == "in" && toUnit == "cm") {
        return value * 2.54;
    }
    else if (fromUnit == "cm" && toUnit == "in") {
        return value / 2.54;
    }
    else {
        cerr << "Invalid length units: " << fromUnit << ", " << toUnit << endl;
        return 0.0;
    }
}

double WeightConverter::convert(double value, const string& fromUnit, const string& toUnit) {
    if (fromUnit == "kg" && toUnit == "g") {
        return value * 1000.0;
    }
    else if (fromUnit == "g" && toUnit == "kg") {
        return value / 1000.0;
    }
    else if (fromUnit == "lb" && toUnit == "kg") {
        return value * 0.453592;
    }
    else if (fromUnit == "kg" && toUnit == "lb") {
        return value / 0.453592;
    }
    else if (fromUnit == "oz" && toUnit == "g") {
        return value * 28.3495;
    }
    else if (fromUnit == "g" && toUnit == "oz") {
        return value / 28.3495;
    }
    else {
        cerr << "Invalid weight units: " << fromUnit << ", " << toUnit << endl;
        return 0.0;
    }
}

double TimeConverter::convert(double value, const string& fromUnit, const string& toUnit) {
    if (fromUnit == "s" && toUnit == "min") {
        return value / 60.0;
    }
    else if (fromUnit == "min" && toUnit == "s") {
        return value * 60.0;
    }
    else if (fromUnit == "h" && toUnit == "min") {
        return value * 60.0;
    }
    else if (fromUnit == "min" && toUnit == "h") {
        return value / 60.0;
    }
    else if (fromUnit == "s" && toUnit == "h") {
        return value / 3600.0;
    }
    else if (fromUnit == "h" && toUnit == "s") {
        return value * 3600.0;
    }
    else {
        cerr << "Invalid time units: " << fromUnit << ", " << toUnit << endl;
        return 0.0;
    }
}
