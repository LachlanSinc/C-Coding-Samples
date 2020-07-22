/*********
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Decription: Implementation
 * file for the Box class.
 * Contains two non set/get
 * functions.
 * **********************/

#include "Box.hpp"

/******************
 * Description: Calculates
 * the surface area for all
 * 6 sides of the box and
 * returns the sum of all 
 * sides
 * ******************/
double Box::calcSurfaceArea(){
   return (2*length*width)+
      (2*length*height)+
      (2*height*width);
}

/*****************
 * Description: Multiplies
 * the height by then width
 * and length, then returns
 * that value(the volume)
 * ****************/
double Box::calcVolume(){
   return height*width*length;
}
void Box::setHeight(
   double heightIn){
   if(heightIn>0)
      height=heightIn;
}
void Box::setLength(double
   lengthIn){
   if(lengthIn>0)
      length=lengthIn;
}
void Box::setWidth(double
   widthIn){
   if(widthIn>0)
      width=widthIn;
}
