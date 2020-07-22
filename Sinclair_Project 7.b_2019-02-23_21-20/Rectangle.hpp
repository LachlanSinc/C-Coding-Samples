/***********************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Description: Class declaration
 * for the rectangle class.
 * *******************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"

class Rectangle: public Shape 
{
  private:
    double length;
    double width;
  public:
    Rectangle(double l, double w) 
    {
        setLength(l);
        setWidth(w);
    }

    virtual void setLength(double);

    virtual void setWidth(double);

    virtual double area();
    virtual double perimeter();
};
#endif
    
        
