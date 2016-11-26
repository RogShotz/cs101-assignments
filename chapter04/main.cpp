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

int example08() { //riceman

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

int example11() { //output primes to 100
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

int example15() { // input to see if prime

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

int example19() { // input/ output multiple names
	std::vector<std::string> names;
	std::vector<int> scores;
	std::string sTemp;
	int iTemp;

	for (int x; x >= 0; x++) {
		std::cin >> sTemp;
		std::cin >> iTemp;
		if (sTemp != "NoName") {
			names.push_back(sTemp);
			scores.push_back(iTemp);
		}
		if (sTemp == "NoName" && iTemp == 0) {
			for (int i = 0; i < scores.size(); i++) {
				std::cout << names[i] << " " << scores[i] << " " << std::endl;
				// figure out how to sort ^ std::sort(scores.begin(), scores.end());
			}
		}
	}

	return 0;
}

int example20() { //Rip this entire function
	std::vector<std::string> names;
	std::vector<int> scores;
	std::string sTemp;
	std::string search;
	int iTemp;

	std::cout
			<< "Enter a name a space and a score, when done inputting, add NoName 0"
			<< std::endl;
	for (int x; x >= 0; x++) {
		std::cin >> sTemp;
		std::cin >> iTemp;
		if (sTemp != "NoName") {
			names.push_back(sTemp);
			scores.push_back(iTemp);
		}
		while (sTemp == "NoName" && iTemp == 0) {
			std::cout << "Enter a name to search a score for: ";
			std::cin >> search;
			for (int i = 0; true; i++) { //Rip this for loop :(
				if (i >= names.size()) {
					std::cout << "No Name Found" << std::endl;
					break;

				} else if (search == names[i]) {
					std::cout << search << " has a score of " << scores[i]
							<< std::endl;
					i = 0;
					break;
				}
			}
		}
	}
	return 0;
}

int main() { //used for testing the functions
	example20();
}
