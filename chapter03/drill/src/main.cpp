#include <iostream>

int main(){
	std::string fName; //Friend Name	
	std::string ofName; //Other Friend Name
	std::string ofSex; //Other Friend's Sex
	
	bool breaker = false;

	std::cout << "Enter the name of the person you want to write to." << std::endl;
	std::cin >> fName;
	std::cout << "Dear " << fName << "," << std::endl;
	std::cout << "    I am sorry to say this, but there will be no water game this year." << std::endl;
	std::cout << "Please add the name of another friend and then the sex associated with them [m/f]. (Please seperate the inputs with a [enter]" << std::endl;
	std::cin >> ofName;
	std::cin >> ofSex;

	while(breaker != true){	
		if(ofSex == "m"){
			std::cout << "If you see " << ofName << " please ask him to call me." << std::endl;
			breaker = true;
	}
		if(ofSex == "f"){
                	std::cout << "If you see " << ofName << " please ask her to call me." << std::endl;
			breaker = true;		
}
		if(ofSex != "m" && ofSex != "f"){
			std::cout << "Your previous gender was not accepted, please enter either [m] or [f]." << std::endl;
			std::cin >> ofSex;
		}		
	}

	std::cout << "Dear " << fName << " ," << std::endl;
 std::cout << "    I am sorry to say this, but there will be no water game this year. ";
	
	breaker = false;
	while(breaker != true){
                if(ofSex == "m"){
                        std::cout << "If you see " << ofName << " please ask him to call me." << std::endl;
			breaker = true;		
		}
                if(ofSex == "f"){
                        std::cout << "If you see " << ofName << " please ask her to call me." << std::endl;
			breaker = true;
		}
        }
	
	std::cout << "Yours sincerely," << std::endl << std::endl << std::endl;
	std::cout << "    Luke Rowe" << std::endl;
	
return 0;
}
