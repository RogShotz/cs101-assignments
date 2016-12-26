/*
 * main.cpp
 *
 *  Created on: Dec 25, 2016
 *      Author: rogshotz
 */

#include<iostream>

	double ctok(double c){
	int k = c + 273.15;

	return k;
	} // converts Celsius to Kelvin

	int main(){
	double c = 0;// declare input variable
	std::cin >> c;	// retrieve temperature to input variable
	double k = ctok(c);	// convert temperature
	std::cout << k << '\n';

	return 0;
	}



