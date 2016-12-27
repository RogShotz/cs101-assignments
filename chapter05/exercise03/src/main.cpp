/*
 * main.cpp
 *
 *  Created on: Dec 25, 2016
 *      Author: rogshotz
 */

#include<iostream>

int ctok(float c) {
	float k = c + 273.15;

	return k;
} // converts Celsius to Kelvin

int main() {
	float c = 0; // declare input variable
	std::cin >> c;	// retrieve temperature to input variable
	float k = ctok(c);	// convert temperature
	if (k > 0) {
		std::cout << k << '\n';
	} else {
		std::cout << c << " will give an imaginary output of " << k;
	}

	return 0;
}

