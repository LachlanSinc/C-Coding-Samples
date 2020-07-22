/*************************
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Description: Header file
 * for the Player class.
 * ************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player{
   private:
      std::string name;
      int points,
          rebounds,
          assists;
       
   public:
      //Default constructor   
      Player(){

         points = -100;
         rebounds = -100;
         assists = -100;
         name = "";
      }

      //Contructor that 
      //takes 4 arguements
      Player(std::string nameIn,
         int pointsIn,
         int reboundsIn,
         int assistsIn){

         points = pointsIn;
         rebounds = reboundsIn;
         assists = assistsIn;
         name = nameIn;
      }
 
      //Methods to get and
      //set player variables
      std::string getName();
      void setPoints(int);
      int getPoints();
      void setRebounds(int);
      int getRebounds();
      void setAssists(int);
      int getAssists();
      //method that compares the
      //points of two players   
      bool hasMorePointsThan(Player);
};
#endif
