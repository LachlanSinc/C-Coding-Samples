/***************
 * Author: Lachlan Sinclair
 * Date: 1/30/2019
 * Description: Funtion that
 * takes and array and array
 * size as a parameter and 
 * returns the median of the
 * array.
 * ********************/

#include<algorithm>

double findMedian(int nums[], int size)
{
   if(size>0){

      //sort the array
      std::sort(nums, nums+size);
 
      //check for even or odd
      //size. Use different
      //alogritims accordingly  
      if(size%2==0)
      {
         return (double)((nums[size/2]
            +nums[(size/2)-1])/2.0);
      }
      else
      {
         return (double)nums[size/2];
      }
   }
   else{
      return 0;
   }
}

















