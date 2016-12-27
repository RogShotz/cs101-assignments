/*
 * main.cpp
 *
 *  Created on: Dec 26, 2016
 *      Author: rogshotz
 */

#include<iostream>
#include<vector>

int main() {
	std::vector<int> values;
	int n; //counter
	int temp1 = 1, temp2;

	std::cout << "Please enter the number of values you want to sum: ";
	std::cin >> n;
	std::cout << "Please enter some integers (Enter 0 to stop): ";

	while (true) {
		std::cin >> temp1;
		if (temp1 != 0) {
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

	std::cout << ") is " << temp1 << ".";
	return 0;
}
