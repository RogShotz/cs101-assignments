/*
 * main.cpp
 *
 *  Created on: Dec 25, 2016
 *      Author: rogshotz
 */

#include<iostream>

	int ctok(float c){
		float k;
		if (c > -273.15){
			k = c + 273.15;
		}
		else{
			std::cout << c << " will give an imaginary output";
		}
	return k;
	} // converts Celsius to Kelvin

	int main(){
	float c = 0;// declare input variable
	std::cin >> c;	// retrieve temperature to input variable
	float k = ctok(c);	// convert temperature
	if (k >0){
	std::cout << k << '\n';
	}

	return 0;
	}

