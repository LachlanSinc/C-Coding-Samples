/**********************
 * Author: Lachlan Sinclair
 * Date: 2/6/2019
 * Description: Sorts an 
 * array of strings, using
 * the selection sort method.
 * ********************/

#include <string>
#include <cctype>

using std::string;

string toUpperTemp(string);

/*****************
 * Description:Sorts
 * strings, does not
 * compare capitalizaton
 * *************/

void stringSort(string array[], int size)
{

   int startScan, minIndex;
   string minValue, upperTemp, realTemp;
 
   for(startScan = 0;
      startScan < (size -1); startScan++)
   {
      minIndex=startScan;
      //Creates a temp string of all
      //upper case characters
      minValue = toUpperTemp(array[startScan]);
      realTemp = array[startScan];
      for(int index = startScan+1;
         index<size; index++)
      {
         //Converts string to upper
         //case to compare it
         upperTemp = toUpperTemp(array[index]);
         if(upperTemp<minValue)
         {
            minValue = upperTemp;
            minIndex = index;
            realTemp = array[index];
            
         }
      }
      //swaps the orginal strings to
      //the correct positions
      array[minIndex] = array[startScan];
      array[startScan] = realTemp;
   }
}
/****************
 * Description: Converts an
 * input string into all 
 * uppercase characters
 * **************/
string toUpperTemp(string temp){
   for(int i = 0; i < temp.size(); i++)
      temp.at(i) = toupper(temp.at(i));
   return temp;
}



