/*****************
 * Author: Lachlan Sinclair
 * Date: 2/12/2019
 * Description: Recursively 
 * find if there is a solution 
 * to the puzzle game.
 * *******************/
#include <vector>
using std::vector;
bool vectorPuzzle(vector<int>, int, vector<int>);

//Helper function
bool vectorPuzzle(vector<int> vect)
{ 
   //vector for tracking where the
   //nodes have been already tested
   vector<int> check(vect.size(),0);
   //check to see if first var is
   //to large
   if(vect[0]<=vect.size()-1){
      check[0]=1;
      return vectorPuzzle(vect, vect[0], check);
   }
   return false;
}
bool vectorPuzzle(vector<int> vect,
   int pos, vector<int> check)
{
   //check if node has already
   //been used
   if(check[pos]==1)
   {
     return false;
   }

   //Record node 
   check[pos]=1;

   //base case
   if(pos==vect.size()-1)
   {
      return true;
   }

   if(pos-vect[pos]>=0)
   {
      if(vectorPuzzle(vect, pos-vect[pos],check))
      {
         return true;
      }
   }
   if(pos+vect[pos]<=vect.size()-1)
   {
      if(vectorPuzzle(vect, pos+vect[pos],check))
      {
         return true;
      }
   }
   //return false if no sub trees
   //hit the 0
   return false;
}





