/***************
 * Author: Lachlan Sinclair
 * Date: 2/23/2019
 * Description: Methods for
 * the rectangle class
 * **************/

#include "Rectangle.hpp"
/****************
 * Description: returns the
 * area for the rectangle
 * *****************/
double Rectangle::area()
{
    return width * length;
}
/********************
 * Description: returns the
 * perimeter for the rectangle
 * ******************/
double Rectangle::perimeter()
{
    return width + width + length + length;
}

void Rectangle::setWidth(double w)
{
   width = w;
}

void Rectangle::setLength(double l)
{
   length = l;
}


