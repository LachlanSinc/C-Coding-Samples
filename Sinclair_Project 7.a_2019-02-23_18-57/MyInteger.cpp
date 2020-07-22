/***********
 * Author: Lachlan Sinclair
 * Date: 2/21/2019
 * Description: File contain
 * method definitions for the
 * MyInteger class
 * **********************/

#include "MyInteger.hpp"

/**************
 * Description: Main constructor
 * that accepts one int
 * parameter and assigns the 
 * pointer to it,
 * ******************/
MyInteger::MyInteger(int value)
{
   pInteger = new int;
   *pInteger = value;
}

/**********************
 * Description: Copy contructor,
 * dynamically allocates memory
 * and assigns the pointer to the 
 * value of the other pointer.
 * *******************/

MyInteger::MyInteger(const MyInteger &obj)
{
   pInteger = new int;
   *pInteger = *(obj.pInteger);
}

int MyInteger::getMyInt(){  
   return *pInteger;
}
void MyInteger::setMyInt(int value){
   *pInteger = value;
}

/*********************
 * Description: Overrides the equal operator
 * will call the copy contructor is this
 * doesnt exist upon calling.
 * ***********************/
MyInteger& MyInteger::operator=(const MyInteger &right)
{
   *pInteger = *(right.pInteger);
   return *this;
}



