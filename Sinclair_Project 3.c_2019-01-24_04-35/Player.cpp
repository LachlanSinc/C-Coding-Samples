/***************
 * Author: Lachlan Sinclair
 * Date: 1/23/2019
 * Description: Implmentation
 * file for the player class,
 * contains all methods.
 * ***********************/

#include "Player.hpp"
#include <string>

std::string Player::getName(){
   return name;
}

void Player::setPoints(int poi){
   points = poi;
}

int Player::getPoints(){
   return points;
}

void Player::setRebounds(
   int reb){
   rebounds = reb;
}

int Player::getRebounds(){
   return rebounds;
}

void Player::setAssists(
   int assistsTemp){
   assists = assistsTemp;
}

int Player::getAssists(){
   return assists;
}

/*********************
 * Description: Returns
 * true if the player has
 * more points than the player
 * passed as an arguement.
 * ******************/
bool Player::hasMorePointsThan(
   Player other){
   
   return points>other.points;
}



