/*****************
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Description: Header file
 * for the box class. Default
 * and 3 arguement constructor
 * written as one
 * ********************/

#ifndef BOX_HPP
#define BOX_HPP

class Box
{
   private:
      double height;
      double length;
      double width;

   public:
      //class methods
      double calcVolume();
      double calcSurfaceArea();
      void setHeight(double);
      void setWidth(double);
      void setLength(double);

      //Constructor
      Box(double heightIn=1.0,
         double widthIn=1.0,
         double lengthIn=1.0){

         //If/elses to insure
         //no negative numbers
         if(heightIn>0)
            height=heightIn;
         else
            height=1.0;

         if(widthIn>0)
            width=widthIn;
         else
            width=1.0;

         if(lengthIn>0)
            length=lengthIn;
         else
            length=1.0;
      }
};
#endif
