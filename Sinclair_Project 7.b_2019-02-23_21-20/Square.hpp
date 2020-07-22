/********************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Description: Square class
 * declartion file.
 * ***************/
#ifndef SQAURE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square: public Rectangle
{
  public:
    Square(double l) : Rectangle(l, l)
    { }

    virtual void setWidth(double w); 

    virtual void setLength(double l);

  private :
    void setDimensions(double l); 
};
#endif
    
