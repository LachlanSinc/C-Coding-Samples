/******************************
**Author: Lachlan Sinclair
**Date: 1/9/2019
**Description: Asks the user for their favorite animal and then prints out
**that that is their favorite animal
**********************************/

#include <iostream>
#include <string>

//a simple example program

int main(){
	//prmpt the user for input
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;

	//output the users input
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;
	
	return 0;
}
