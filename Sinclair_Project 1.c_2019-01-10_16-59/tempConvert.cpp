/********************
 * Author: Lachlan Sinclair
 * Date: 1/9/2019
 * Description: Converts a provided Celsius to Fahrenheit and prints the result.
 * ****************/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

	//Delcate the two doubles used	
	double fahrenheit, celsius;

	//prompt the user for the intial Celsius
	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsius;
	
	//calculate fahrenheit
	fahrenheit=((9.0/5.0)*celsius)+32.0;

	//display the results
	cout << "The equivalent Fahrenheit temperature is:" << endl << fahrenheit << endl;

	return 0;
}
