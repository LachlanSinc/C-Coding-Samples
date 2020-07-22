/***********
 * Author: Lachlan Sinclair
 * Date: 1/30/2019
 * Description: Accepts an
 * array of people and its size
 * and returns the standard
 * deviation.
 * ***********/

#include"Person.hpp"
#include<string>
#include<cmath>


double stdDev(Person people[], int size)
{
   double tempSum, average, total = 0.0;

   //check to insure a
   //good array is passed
   if(size<=0){
      return 0;
   }
   else{
      //calculate average
      for(int count =0; count<size; count++){
         total+=people[count].getAge();
      }
      average = total/size;

      //use average to calculate
      //population std deviation
      for(int count =0; count<size; count++){
         tempSum +=
            pow((people[count].getAge()-average),
            2.0);
      }
      //return the std deviation
      return sqrt(tempSum/size);
   }
}










