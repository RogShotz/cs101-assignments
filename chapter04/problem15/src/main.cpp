/*
 * main.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: rogshotz
 */

#include<algorithm>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>

int main() { // input to see if prime

	int n;
	while (n != 0) {
		std::cout << "Input a number to see if it is a prime: ";
		std::cin >> n;

		for (int y = 2; y < n; y++) {
			if (n % y == 0) {
				std::cout << n << " is not a prime" << std::endl;
				break;
			}
			if (y == n - 1) {
				std::cout << n << " is a prime" << std::endl;
			}
		}
	}
	return 0;
}
