/*
 * main.cpp
 *
 *  Created on: Dec 26, 2016
 *      Author: rogshotz
 */

#include<iostream>
#include<cmath>

int main() {
	float a, b, c; //user inputs
	float x; //used to check for real solutions
	float x1, x2; //formulas both + & - that output a solution

	std::cout << "Please enter a value for a, b, and c: ";
	std::cin >> a >> b >> c;
	x = (2 * b) - (4 * a * c);
	if (x > 0) {
		x1 = ((-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a));
		x2 = ((-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a));

		std::cout << "Solutions are " << x1 << ", " << x2;
	} else {
		std::cout << "No real roots";
	}

	return 0;
}
