/*
 * This file and associated .cpp file are licensed under the GPLv3 License Copyright (c) 2024 Sam Groveman
 * Contributors: Sam Groveman
 */

#pragma once
#include <Sensor.h>

/// @brief Dummy sensor device for testing
class DummySensor : public Sensor {
	public:;
		DummySensor(String name);
		bool begin();
		bool takeMeasurement();

	private:
};