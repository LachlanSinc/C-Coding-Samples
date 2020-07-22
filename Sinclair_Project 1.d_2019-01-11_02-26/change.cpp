/**************
 * Author: Lachlan Sinclair
 * Date: 1/9/2019
 * Description: represent change by the fewest number of coins
 * ********************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	//Declaring totals and remainders
	int intialTotal, numOfQuarters, numOfDime, numOfNickel, numOfPennies,
	    postQuarterTotal, postDimeTotal, postNickelTotal;

	const int QUARTER_AMOUNT=25, DIME_AMOUNT=10, NICKEL_AMOUNT=5;
		
	//Prompt the user for input
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> intialTotal;

	//Divide to get number of coins, then modulues to get the remaining total
	numOfQuarters = intialTotal/QUARTER_AMOUNT;
	postQuarterTotal = intialTotal%QUARTER_AMOUNT;
	numOfDime = postQuarterTotal/DIME_AMOUNT;
        postDimeTotal = postQuarterTotal%DIME_AMOUNT;
	numOfNickel = postDimeTotal/NICKEL_AMOUNT;
 	numOfPennies = postDimeTotal%NICKEL_AMOUNT;

	//Output the amount of coins
	cout << "Your change will be:" << endl << "Q: " << numOfQuarters
		<< endl << "D: " << numOfDime << endl << "N: " <<
		numOfNickel << endl << "P: " << numOfPennies << endl;

	return 0;

}

