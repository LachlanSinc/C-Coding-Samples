/*******************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Description: Abstract 
 * shape class
 * ******************/

#ifndef SHAPE_HPP
#define SHAPE_HPP

//global constant for pi
const double PI = 3.14159L;

class Shape 
{
  public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

#endif

    
    
