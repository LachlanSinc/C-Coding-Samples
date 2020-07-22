/********
 * Author: Lachlan Sinclair
 * Date: 1/30/2019
 * Description: Sorts 3 
 * integers that are passed
 * in as point arguements.
 * ***************/



void smallSort2(int *val1, 
   int *val2, int *val3)
{
   int temp;
   
   //three compares,
   //swap the parameters
   //by references when
   //needed
   
   if(*val3<*val1){
   
      temp=*val3;
      *val3=*val1;
      *val1=temp;
   }
   if(*val2<*val1){

      temp=*val2;
      *val2=*val1;
      *val1=temp;
   }
   if(*val3<*val2){

      temp=*val3;
      *val3=*val2;
      *val2=temp;
   }
   //didnt create a swap
   //function this time
   //might be 
   //slighty faster this
   //way but maybe less 
   //readable
}
