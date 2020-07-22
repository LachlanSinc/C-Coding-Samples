/*******************
 * Author:Lachlan Sinclair
 * Date: 2/12/2019
 * Decription: Recursive
 * funtion that returns
 * the maxium value.
 * ******************/


int arrayMax(int [], int, int);

//helper function
int arrayMax(int arr[], int size)
{
   return arrayMax(arr, size-1, arr[size-1]);
}

int arrayMax(int arr[], int size, int max)
{
   //base case
   if(size<=0)
   {
      return max;
   }
   
   else
   { 
      //check/set main
      if(max<arr[size-1])
      {
         max=arr[size-1];
      }
      //recursive call
      return arrayMax(arr,size-1, max);
   }
}


