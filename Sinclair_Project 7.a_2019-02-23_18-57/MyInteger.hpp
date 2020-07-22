/********************
 * Author: Lachlan Sinclair
 * Date: 2/21/2019
 * Decription: MyInteger class
 * file, contains one feild and
 * various protypes along with a 
 * destructor.
 * ***********************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger
{
   private:

      int *pInteger;

   public:

      MyInteger& operator=(const MyInteger&);
      //copy constructor
      MyInteger(const MyInteger&);
      //regular constructor
      MyInteger(int value);
      int getMyInt();
      void setMyInt(int);

      //destructor
      ~MyInteger(){
         delete pInteger;
         pInteger = nullptr;
      }
};

#endif




