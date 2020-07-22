/****************
 * Author: Lachlan Sinclair
 * Date:1/23/2019
 * Description: Header file
 * for Taxicab class. 2
 * contructors avialable.
 * ************************/

#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab{

   private:
      int xCoord;
      int yCoord;
      int distance;

   public:

      //Get/Set Methods
      int getXCoord();
      int getYCoord();
      int getDistanceTraveled();
      //Methods to move
      //the cab
      void moveX(int);
      void moveY(int);

      //contructor 2 arguements
      Taxicab(int x, int y){

         xCoord=x;
         yCoord=y;
         distance=0;
      }
      //default constructor
      Taxicab(){
         xCoord=yCoord=distance=0;
      }
};
#endif
