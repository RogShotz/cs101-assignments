/*
 * main.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: rogshotz
 */

#include<iostream>

int example08() {

	int reward;
	int grain = 1;
	int square = 0;

	std::cout << "How much rice would you like to redeem? ";
	std::cin >> reward;

	while (grain <= reward) {
		grain = grain * 2;
		square++;
	}

	std::cout << "You used " << square << " square and redeemed " << grain
			<< " rice grains.";

	return 0;
}

int example15() {

	int y = 2;
	int n;

	std::cout << "Input a number to see if it is a prime: ";
	std::cin >> n;
	if (n % y == 0) {
		std::cout << n << " is not a prime";
	} else {
		std::cout << n << " is a prime";
	}
	return 0;
}

int main() { //used for testing the functions

}
