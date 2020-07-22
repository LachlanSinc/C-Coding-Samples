/************************
 * Author: Lachlan Sinclair
 * Date: 2/6/2019
 * Description: Bubble sort
 * for an array of Box 
 * objects
 * *****************/

#include "Box.hpp"

void boxSort(Box array[], int size)
{
   Box temp;
   bool madeAswap;
   
   //keep looping while swaps are 
   //still being made
   do{
  
      madeAswap=false;
      
      //loop through all elements
      for(int count =0; count <
         (size-1); count++){

         //if for elements that need 
         //to be swapped
         if(array[count].calcVolume() <
            array[count+1].calcVolume()){

            temp = array[count];
            array[count]=array[count+1];
            array[count+1]=temp;
            madeAswap=true;
         }
      }
   }while(madeAswap);
} 









