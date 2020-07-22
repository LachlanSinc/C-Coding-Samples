/********************
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Description: Header file 
 * for Team class. Includes
 * prototypes for all methods.
 * Only one none default 
 * contructor.
 * ******************/

#ifndef TEAM_HPP
#define TEAM_HPP
#include "Player.hpp"

class Team{

   private:
      Player pointGuard,
         shootingGuard,
         smallForward,
         powerForward,
         center;

   public:
      //Methods for getting
      //and setting team
      //variables.
      void setPointGuard(Player);
      Player getPointGuard();
      void setShootingGuard(Player);
      Player getShootingGuard();
      void setSmallForward(Player);
      Player getSmallForward();
      void setPowerForward(Player);
      Player getPowerForward();
      void setCenter(Player);
      Player getCenter();

      //Method to calculate
      //total points for the
      //team
      int totalPoints();  

      //Contructor takes 4
      //arguements
      Team(Player pg, Player sg,
         Player sf, Player pf,
         Player cent){
      
         pointGuard = pg;
         shootingGuard = sg;
         smallForward = sf;
         powerForward = pf;
         center = cent;
      }
      // Default contructor
      // creates a team of
      // default players
      Team(){
         Player nullPlayer1,
            nullPlayer2,
            nullPlayer3,
            nullPlayer4,
            nullPlayer5;

            pointGuard =
               nullPlayer1;
            shootingGuard = 
               nullPlayer2;
            smallForward =
               nullPlayer3;
            powerForward =
               nullPlayer4,
            center =
               nullPlayer5;
      }
};
#endif









