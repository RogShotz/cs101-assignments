/*
 * main.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: rogshotz
 */

#include<algorithm>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>

/*int main() { for 1 - 4
 double x = 1;
 double y = 1;

 while (true) {
 std::cin >> x >> y;
 if(x == 0 || y == 0){
 break;
 }
 if(x > y){
 std::cout << "The larger number is: " << x << std::endl;
 std::cout << "The smaller number is: " << y << std::endl;
 if(x - y <= .01){
 std::cout << "the numbers are almost equal" << std::endl;
 }
 }
 else if (x < y){
 std::cout << "The larger number is: " << y << std::endl;
 std::cout << "The smaller number is: " << x << std::endl;
 if(y - x <= .01){
 std::cout << "the numbers are almost equal" << std::endl;
 }
 }
 else if (x == y){
 std::cout << "the numbers are equal" << std::endl;
 }
 }
 return 0;
 }
 */

int main() {
	double x;
	double bigX;
	double smallX;
	std::string unit;

	std::cin >> x >> unit;
	if (x == 0 || unit != "cm" || unit != "in" || unit != "ft"){
		std::cout << "Nop";
		exit(0);
	}
	if (unit == "cm"){
		x = x / 100;
	}
	if (unit == "in"){
		x = x * 254;
	}
	if (unit == "ft"){
		x = x * 3048;
	}
	bigX = x;
	smallX = x;
	while (true) {
		std::cin >> x >> unit;
		if (x == 0 || unit != "cm" || unit != "in" || unit != "ft"){
			std::cout << "Nop";
			break;
		}
		else if (unit == "cm"){
			x = x / 100;
		}
		else if (unit == "in"){
			x = x / 254;
		}
		else if (unit == "ft"){
			x = x / 3.048;
		}
		if (x > bigX) {
			bigX = x;
			std::cout << "largest seen so far" << std::endl;
		} else if (x < smallX) {
			smallX = x;
			std::cout << "smallest seen so far" << std::endl;
		}
	}

	return 0;
}
