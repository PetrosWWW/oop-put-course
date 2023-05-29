#ifndef UNITS_H
#define UNITS_H
#include <string>
using namespace std;

class UnitConversion {
public:
    virtual double convert(double value, const string& fromUnit, const string& toUnit) = 0;
};

class TemperatureConverter : public UnitConversion {
public:
    double convert(double value, const string& fromUnit, const string& toUnit) override;
};

class LengthConverter : public UnitConversion {
public:
    double convert(double value, const string& fromUnit, const string& toUnit) override;
};

class WeightConverter : public UnitConversion {
public:
    double convert(double value, const string& fromUnit, const string& toUnit) override;
};

class TimeConverter : public UnitConversion {
public:
    double convert(double value, const string& fromUnit, const string& toUnit) override;
};

#endif 
