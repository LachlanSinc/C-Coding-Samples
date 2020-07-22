/**************************
 * Author: Lachlan Sinclair
 * Date: 2/26/2019
 * Description: Main method 
 * for circle class with a 
 * try catch using the illegal
 * radius sub class.
 * **********************/

#include "Circle.hpp"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

   double maxTemp, radTemp, area;

   //Prompt the user for input
   cout << "Enter the maxRadius for Circles." << endl;
   cin >> maxTemp;
   cout << "Enter the radius for a new Circle object." << endl;
   cin >> radTemp;
 
   //display area if radius is small enough
   try
   {
      Circle::setMaxRadius(maxTemp);
      Circle cir(radTemp);
      cout << "The Circle object was successfully created." << endl;
      cout << "The area of the circle is " <<
         cir.calcArea() << "." << endl;
   }
   //display message if radius is to big
   catch(Circle::IllegalRadius ex)
   {
      cout << "The Circle object could not be created." << endl;
      cout << "A radius of " << ex.badRadius <<
         " exceeds the maximum allowed radius." << endl;
   } 

   return 0;
}






