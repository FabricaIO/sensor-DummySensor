#include "DummySensor.h"

/// @brief Constructs a dummy sensor
/// @param Name The device name
DummySensor::DummySensor(String Name) : Sensor(Name) {}

bool DummySensor::begin() {
	Description.parameterQuantity = 3;
	Description.type = "Testing";
	Description.parameters = {"Temperature", "PM 10", "Humidity"};
	Description.units = {"C", "ug/m^3", "%RH"};
	values.resize(Description.parameterQuantity);
	return true;
}

bool DummySensor::takeMeasurement() {
	values[0] = random(40, 95);
	values[1] = random(0, 200);
	values[2] = random(30, 80);
	return true;
}