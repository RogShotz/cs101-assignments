/*
 * main.cpp
 *
 *  Created on: Dec 25, 2016
 *      Author: rogshotz
 */

#include<iostream>

int ctok(float c) {
	float k;
	if (c > -273.15) {
		k = c + 273.15;
		std::cout << k;
	} else {
		std::cout << c << " will give an imaginary output";
	}
	return c;
} // converts Celsius to Kelvin

int ktoc(float c) {
	float k;
	if (c > 273.15) {
		k = c - 273.15;
		std::cout << k;
	} else {
		std::cout << c << " will give an imaginary output";
	}
	return c;
}

int main() {
	std::string cork;

	std::cout
			<< "Type 'ctok' for Celcius to Kelvin, or 'ktoc' for Kelvin to Celcius"
			<< std::endl;
	float c = 0; // declare input variable
	std::cin >> cork;
	if (cork == "ctok") {
		std::cin >> c;	// retrieve temperature to input variable
		float k = ctok(c);	// convert temperature
	}
	if (cork == "ktoc") {
		std::cin >> c;
		float k = ktoc(c);
	}

	return 0;
}

