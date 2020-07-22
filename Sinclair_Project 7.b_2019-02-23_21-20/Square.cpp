/******************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Description: Square class
 * implementation file.
 * ******************/

#include "Square.hpp"

/*********************
 * Description: Calls both 
 * setWidth and setLength with
 * the same value.
 * ********************/
void Square::setDimensions(double l)
{
   Rectangle::setWidth(l);
   Rectangle::setLength(l);
}
void Square::setWidth(double w)
{
   setDimensions(w);
}
void Square::setLength(double l)
{
   setDimensions(l);
}
