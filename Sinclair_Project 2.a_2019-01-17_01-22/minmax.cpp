/*********************
 * Author: Lachlan Sinclair
 * Date: 1/14/2019
 * Description: This program asks the
 * user for a number of integers then
 * outputs the min and max values.
 * **********************/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
   
   int total, max, min, tempValue;

   //Prompt the user for total 
   //number of integers and then
   //the integers
   cout << "How many integers would"
   << " you like to enter?" << endl;
   cin >> total;

   cout << "Please enter " << total
   << " integers." << endl;
   
   //Set all three values to the
   //first integer provided
   cin >> tempValue;
   min = max = tempValue;
   
   //Loop through all remaining
   //user input
   for(int count =2; count<=total;count++){

      cin >> tempValue;

      //Compare input to min and
      //max, replace if needed
      if(tempValue<min){
         min = tempValue;
      }
      else if(tempValue>max){
         max = tempValue;
      }
   }

   //output final min and max
   cout << "min: " << min << endl <<
      "max: " << max << endl;

   return 0;
}



