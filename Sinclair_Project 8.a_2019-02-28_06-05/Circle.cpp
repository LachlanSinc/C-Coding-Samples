/**********************
 * Author: Lachlan Sinclair
 * Date: 2/26/2019
 * Description: Methods for
 * the Circle class.
 * *********************/

#include "Circle.hpp"

//setting the static variable.
double Circle::maxRadius=10.0;

/****************
 * Description: Constructor
 * with one element to set
 * the radius.
 * ********************/
Circle::Circle(double rad)
{
   if(rad>maxRadius)
      throw IllegalRadius(rad);
   else
      radius=rad;
}
/****************
 * Description: Default 
 * constructor.
 * ********************/
Circle::Circle()
{
   radius=1.0L;
}
/****************
 * Description: Returns
 * the area for the circle
 * object.
 * ********************/
double Circle::calcArea()
{
   return 3.14159L * radius * radius;
}
/****************
 * Description: Sets the
 * Max radius value.
 * ********************/
void Circle::setMaxRadius(double temp)
{
   maxRadius=temp;
}




