/*************
 * Author: Lachlan Sinclair
 * Date:1/15/2019
 * Description: Ask the user for a number,
 * then it asks the user to guess the number
 * providing hints whether 
 * the number is to small or large, finally
 * return the number of guesses
 * *****************************/


#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){

   int value, guess, counter = 1;

   //prompt the user for 
   //the number to guess
   cout <<
   "Enter the number for the player to guess."
   << endl;
   cin >> value;

   cout << "Enter your guess."
   << endl;
   cin >> guess;

   //loop until they guess
   //the number
   while(guess!=value){

      //Give the user a hint
      //then accept the next guess
      if(guess<value){

         cout << "Too low - try again." 
         << endl;
         cin >> guess;
      }
      else{

         cout << "Too high - try again."
         << endl;
         cin >> guess;
      }
      
      //counter to keep track
      //of total guesses
      counter++;
   }
   
   cout << "You guessed it in " 
   << counter << " tries." << endl;

   return 0;
}
