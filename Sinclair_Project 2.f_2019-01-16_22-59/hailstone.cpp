/***************
 * Author: Lachlan Sinclair
 * Date: 1/15/2019
 * Description: A function that 
 * determines the number of steps 
 * required to reach 1 using the 
 * hailstone alogrithim
 * ********************/

#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int hailstone(int);

/*int main(){

   int num;
   cin >> num;
   cout << hailstone(num) << endl;

   return 0;
}
*/

/***********************
 * Description: Execute the hailstone
 * alogrithim starting with the passed
 * arguement. Return number of steps
 * reuired to reach 1.
 * *********************/
int hailstone(int value){

   int counter = 0;

   //keep looping until 
   //one is reached
   while (value != 1){

      if(value%2==0){
         
         value = value/2;
      }
      else{

         value= (value*3)+1;
      }

   //increment counter to keep
   //track of total steps
   counter++;
   }

   return counter;
}


