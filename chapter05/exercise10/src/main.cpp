/*
 * main.cpp
 *
 *  Created on: Dec 26, 2016
 *      Author: rogshotz
 */

#include<iostream>
#include<vector>
#include <stdlib.h>

int main() {
	std::vector<double> values;
	double n; //counter
	double temp1 = 1, temp2;

	std::cout << "Please enter the number of values you want to sum: ";
	std::cin >> n;
	std::cout << "Please enter some integers (Enter 0 to stop): ";

	while (true) {
		std::cin >> temp1;
		if (std::cin.fail()) {
			std::cout
					<< "Not a valid input, will output extraneous answer, please try again and input an integer";
			return 0;
		} else if (temp1 != 0) {
			values.push_back(temp1);
		} else {
			break;
		}
	}
	std::cout << "The sum of the first " << n << " numbers ( ";

	while (temp2 < n) {
		temp1 = temp1 + values[temp2];
		std::cout << values[temp2] << " ";
		temp2++;
	}
	std::cout << ") is " << temp1 << "." << std::endl;
	std::cout
			<< "Difference between the first value is non obtainable and will not be displayed."
			<< std::endl;
	temp2 = 1;
	while (temp2 < n) {
		temp1 = 0;
		temp1 = abs((values[temp2] - values[temp2 - 1]));
		std::cout << temp1;
		temp2++;
	}

	return 0;
}
