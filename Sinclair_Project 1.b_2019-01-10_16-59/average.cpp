/******************************
 * Author: Lachlan Sinclair
 * Date: 1/9/2019
 * Description: This program asks the user for 5 numbers, then prints the average.
 * **************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
	//declate all variables used
	double firstNumber, secondNumber, thirdNumber,
	    fourthNumber, fifthNumber, average;
	
	//Prompt the user for 5 ints
	std::cout << "Please enter five numbers." << std::endl;
	cin >> firstNumber >> secondNumber >> thirdNumber >> fourthNumber >> fifthNumber;

	//Calculate the average and out put it
	average=(firstNumber+secondNumber+thirdNumber+fourthNumber+fifthNumber)/5;
	cout << "The average of those numbers is:" << endl << average << endl;

	return 0;
}
