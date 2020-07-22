/********************
 * Author: Lachlan Sinclair
 * Date: 2/6/2019
 * Description: Binary 
 * search of an array of
 * Person objects.
**************************/


#include "Person.hpp"
#include <string>
#include <vector>

using std::string;
using std::vector;

int personSearch(const vector<Person> people, string name){

   int first = 0,
   last = people.size()-1,
   middle,
   position = -1;
   
   bool found  = false;

   //loop until all the array
   //is searched or the value
   //is found
   while(!found && first<=last)
   {
      middle = (first+last)/2;
      if(people[middle].getName() == name )
      {
         //flip bool when found to
         //break loop
         found = true;
         position = middle;
      }
      else if(people[middle].getName() > name)
      {
         last = middle -1;
      }
      else
      {
         first = middle +1;
      }
   }    
   //return the position
   //-1 if not found
   return position;
}














