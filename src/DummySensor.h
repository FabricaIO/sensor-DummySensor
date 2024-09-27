/*
 * This file and associated .cpp file are licensed under the GPLv3 License Copyright (c) 2024 Sam Groveman
 * Contributors: Sam Groveman
 */

#pragma once
#include <Sensor.h>

class DummySensor : public Sensor {
	public:;
		bool begin();
		bool takeMeasurement();

	private:
};