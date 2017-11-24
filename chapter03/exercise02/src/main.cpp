#include<iostream>

int main(){
	float xInput; //Input of x
	float k_miToKm = 1.609; // Constant of Mi to Km
	float xConv; // Converted form of x

while(true){
	std::cout << "Hi, i'm here to convert your miles to kilometers! Just type your number and press [enter]" << std::endl;
	std::cin >> xInput;
	xConv = xInput * k_miToKm;
	std::cout << xInput << " is approximately " << xConv << std::endl; 
}

return 0;
}
