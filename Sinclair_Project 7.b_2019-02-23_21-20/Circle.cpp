/********************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Description: Methods for
 * the circle class.
 * *****************/


#include "Circle.hpp"

/***************
 * Description: Returns
 * the area of the circle
 * ***************/
double Circle::area() 
{
    return PI * radius * radius;
}

/*******************
 * Description: Returns the
 * perimeter of the circle.
 * ********************/
double Circle::perimeter()
{
    // 2.0L to force double calculation
    return 2.0L * PI * radius;
}
void Circle::setRadius(double r)
{
   radius = r;
}
