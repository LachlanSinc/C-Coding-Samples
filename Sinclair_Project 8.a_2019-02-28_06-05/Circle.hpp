/*********************
 * Author: Lachlan Sinclair
 * Date: 2/26/2019
 * Description: Header file
 * for the cirle class, with
 * illegalradius class.
 * ***********************/


#ifndef SQUARE_HPP
#define SQUARE_HPP

class Circle
{
   private:

      static double maxRadius;
      double radius;

   public:

      //static void maxRadius();
      //default constructor
      Circle();
      Circle(double);
      double calcArea();
      static void setMaxRadius(double);

      //error class
      class IllegalRadius
      {
         public:
            double badRadius;
            IllegalRadius(double err)
            {badRadius=err;}
      };      
      

};
#endif

