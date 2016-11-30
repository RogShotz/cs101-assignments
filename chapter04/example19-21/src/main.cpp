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

int main() { //Rip this entire function
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
