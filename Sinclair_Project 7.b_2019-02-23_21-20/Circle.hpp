/******************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Decription: Circle class,
 * derived class of the
 * shape class
 * ****************/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"

class Circle : public Shape {
  private:  
   double radius;
    
  public:
    Circle(double radius) 
    {
        setRadius(radius);
    }
    double area();
    double perimeter();
    void setRadius(double);
};
#endif
