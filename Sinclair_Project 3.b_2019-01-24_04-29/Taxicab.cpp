/********************
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Description: Implementation
 * file for Taxicab class.
 * ************************/

#include "Taxicab.hpp"
#include <cmath>

/****************
 * Description: Moves
 * the x coordinate 
 * based of the argument
 * provided.
 * **************/
void Taxicab::moveX(int x){
   xCoord += x;
   distance += abs(x);
}

/****************
 * Description: Moves
 * the y coordinate 
 * based of the argument
 * provided.
 * **************/

void Taxicab::moveY(int y){
   yCoord += y;
   distance += abs(y);
}

int Taxicab::getXCoord(){
   return xCoord;
}

int Taxicab::getYCoord(){
   return yCoord;
}

int Taxicab::getDistanceTraveled(){
   return distance;
}

