/********************
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Description: Implementation
 * file for the Team class.
 * Includes all methods.
 * *******************/

#include "Player.hpp"
#include "Team.hpp"

void Team::setPointGuard(Player guard){
   pointGuard = guard;
}

Player Team::getPointGuard(){
   return pointGuard;
}

void Team::setShootingGuard(
   Player shooting){
   shootingGuard = shooting;
}

Player Team::getShootingGuard(){
   return shootingGuard;
}

void Team::setSmallForward(
   Player forward){
   smallForward = forward;
}

Player Team::getSmallForward(){
   return smallForward;
}

void Team::setPowerForward(
   Player power){
   powerForward = power;
}

Player Team::getPowerForward(){
   return powerForward;
}

void Team::setCenter(Player cent){
   center = cent;
}

Player Team::getCenter(){
   return center;
}

/******************
 * Description: Sums the
 * points for all players
 * in the team, and returns
 * the value as an int.
 * ****************/
int Team::totalPoints(){
   return pointGuard.getPoints()+
      shootingGuard.getPoints()+
      smallForward.getPoints()+
      powerForward.getPoints()+
      center.getPoints();
}
















