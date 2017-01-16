/*
 * main.cpp
 *
 *  Created on: Jan 16, 2017
 *      Author: rogshotz
 */

#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<int> answer = { 1, 2, 3, 4 }; //hardcoded, clean up in exercise13
	std::vector<int> guess; //users guess
	int temp; //for trash holding
	int y; //place holder
	int cows; //correct digit in wrong spot
	int bulls; //correct digit in right spot

	while (true) {
		guess.erase(guess.begin(), guess.end());

		std::cout << "Please input a 4 digit value, each split by a space: ";
		while (guess.size() < answer.size()) {

			std::cin >> temp;
			guess.push_back(temp);
		}

		bulls = 0; //resets for each guess
		cows = 0; //resets for each guess

		for (int x = 0; x < answer.size(); x++) { //for checking digits and place
			if (guess[x] == answer[x]) {
				bulls++;

			}
			y = 0;
			while (y != answer.size()) { //for checking correct digits only
				if (guess[y] == answer[x] && guess[x] != answer[x]) {
					cows++;
				}
				y++;
			}
		}
		if (guess == answer) {
			break; //exits loop when answer is guessed
		}
		std::cout << bulls << " bull(s) and " << cows << " cow(s)" << std::endl;
	}

	std::cout << "YOU GUESSED IT!";

	return 0;
}
