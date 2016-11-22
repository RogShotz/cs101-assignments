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

int main() {

	example08();

}
