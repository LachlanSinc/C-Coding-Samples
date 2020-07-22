/*****************
 * Author: Lachlan Sinclair
 * Date: 1/15/2019
 * Description: A function that 
 * sorts 3 int from smallest to largest.
 * ***********************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//protypes with refrence 
//arguements
void smallSort(int&, int&, int&);
void swap(int&, int&);

/*int main(){

   int first = 2,
      second = 14, 
      third = -90;

   cout << first << " " <<
      second << " " 
      << third << endl;

   smallSort(first, second, third);

   cout << first << " " <<
      second << " " 
      << third << endl;


   return 0;
}
*/

/**********************
 * Description: Accepts two variables
 * and swaps them in the calling 
 * function using refrences
 ***********************/
void swap(int& firstRef, int& secondRef){
   
   int temp;
   
   //reasign variables to
   //the others value 
   temp = firstRef;
   firstRef = secondRef;
   secondRef = temp;
}

/**********************
 * Description: Accepts 3 refrence
 * paramters and sorts them into 
 * acsending order using the swap
 * function
 * *******************/
void smallSort(int& first, int& second,
   int& third){

   int temp;
   
   //run three compares that
   //swap values if needed
   if(third<first){
      swap(third, first); 
   }
   if(second<first){
      swap(second, first);
   }
   if(third<second){    
      swap(third, second); 
   }
}

