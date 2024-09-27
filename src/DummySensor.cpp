#include "DummySensor.h"

bool DummySensor::begin() {
	values.resize(3);
	Description.parameterQuantity = 3;
	Description.type = "Testing";
	Description.name = "Dummy Sensor";
	Description.parameters = {"Temperature", "PM 10", "Humidity"};
	Description.units = {"C", "ug/m^3", "%RH"};
	Description.id = -1;
	return true;
}

bool DummySensor::takeMeasurement() {
	values[0] = random(40, 95);
	values[1] = random(0, 200);
	values[2] = random(30, 80);
	return true;
}