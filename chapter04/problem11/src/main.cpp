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

int main() { //output primes to 100
	for (int n = 2; n <= 100; n++) {
		for (int y = 2; y * y <= n; y++) {
			if (n % y == 0) {
				break;
			} else if (y + 1 > sqrt(n)) {
				std::cout << n << " ";

			}

		}
	}

	return 0;
}
