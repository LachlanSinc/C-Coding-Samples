/***********************
 * Author: Lachlan Sinclair
 * Date: 2/12/2019
 * Description: recursive 
 * function that sums the 
 * values in an array
 * **********************/

double summer(double arr[], int size)
{
   //base case
   if(size<=0)
   {
      return 0;
   }
   //recursive call
   else
   {
      return arr[size-1]+summer(arr,size-1);
   }

}
