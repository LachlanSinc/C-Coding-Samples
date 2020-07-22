/*********************
 * Author: Lachlan Sinclair
 * Date: 2/12/2019
 * Description: Returns
 * true if the provided array
 * is decreasing,
 * ***********************/

bool isDecreasing(int [],int, int);

//Helper function
bool isDecreasing(int arr[], int size)
{
   return isDecreasing(arr, size-1,arr[size-1]);
}

bool isDecreasing(int arr[], int size, int last)
{
   //base case
   if(size<=0)
   {
      return true;
   }
   //check for decreasing
   //breaks recursion if it
   //isnt decreasing
   else if(arr[size-1]<=last)
   {
      return false;
   }
   else
   {
      return isDecreasing(arr, size-1, arr[size-1]);
   }
}


