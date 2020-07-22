/*******************
 * Author: Lachlan Sinclair
 * Date: 1/15/2019
 * Description: This program reads in numbers 
 * from a file, sums them all, then outputs the 
 * sum to another file.
 * ********************/

#include <string>
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;


int main(){

   ifstream inputFile;
   ofstream outputFile;

   string fileName;
   
   int total=0, current;
   
   //Prompt the user
   // for a file name
   cout << 
   "Please enter your filename."
   << endl;
   cin >> fileName;

   //open the input file
   inputFile.open(fileName.c_str());
   
   //Check to make sure the
   //inputfile opened
   if(inputFile){
   
      //While input file 
      //has more numbers, sum them
      while(inputFile >> current){

         total += current;
      }
      
      //Open txt file and
      //write the sum to it
      outputFile.open("sum.txt");
      outputFile << total << endl;
    
      //Close both of the files 
      inputFile.close();
      outputFile.close();
      
      cout << 
      "result written to sum.txt" 
      << endl;

   }
   //Error message for when
   //the file doesnt open
   else{
  
      cout << 
      "could not access file" 
      << endl;
   }


   return 0;
}

