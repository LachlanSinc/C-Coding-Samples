/****************
 * Author: Lachlan Sinclair
 * Date: 1/30/2019
 * Description:
 * ***************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include<string>


class Person
{
   private:
      std::string name;
      double age;

   public:
      std::string getName();
      double getAge();

      //Default/overloaded
      //contructor
      Person(std::string nameTemp="", double ageTemp=0){

         age = ageTemp;
         name = nameTemp;
      }
};
#endif
