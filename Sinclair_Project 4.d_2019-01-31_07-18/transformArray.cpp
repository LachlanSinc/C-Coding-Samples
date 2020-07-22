/***********
 * Author: Lachlan Sinclair
 * Date: 1/30/2019
 * Decription: Accepts a
 * reference to a pointer 
 * of a array, then it doubles
 * it then appends a copy of the
 * array to the back the 
 * intial array.
 * ********************/


void transformArray(int*& nums,int size)
{
   //create temp dynamic
   //array
   int *temp = nullptr;
   temp = new int [size*2];

   //for loop, creates a new array
   //from the refrenced array
   for(int count=0; count<size; count++){
      temp[count]= nums[count];
      temp[count+size]= nums[count]*2;
   }


   //Delete old array  
   if(nums != nullptr){   
      delete [] nums;
   }

   //set the orginal
   //array to the new one
   //and stop dangling
   //pointer
   nums = temp;
   temp = nullptr;   
}
