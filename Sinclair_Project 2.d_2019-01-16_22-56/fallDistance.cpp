/**************
 * Author: Lachlan Sinclair
 * Date: 1/15/2016
 * Description: This is a function that
 * calculates the distance traveled over
 * a given time due to gravity
 **********************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//Prototype
double fallDistance(double);

/*int main(){

   double num;
   cin >> num;
   cout << fallDistance(num) << endl;
   return 0;
}*/

/************************
 * Description: Accepts a double,
 * then uses that value as the value
 * for time in the equation for distance
 * traveled by a falling object, and 
 * returns the distance.
 * ********************/
double fallDistance(double time){

   //return the result of
   //the falldistance formula
   return time*time*4.9;
}
