/***************
 * Author: Lachlan Sinclair
 * Date: 3/6/2019
 * Description: Implementation
 * file for the StringList
 * class.
 * *************************/
//#include <iostream>
#include <string>
#include <vector>
#include "StringList.hpp"

/***************
 * Description: Function
 * to replace redudant 
 * constructing code.
 *********************/
void StringList::initialize()
{
   head.next=&tail;
   tail.next=&head;
}
/********************
 * Description: Copy 
 * Constuctor
 * ******************/
StringList::StringList(const StringList &other)
{
   initialize();
   ListNode *ptr =  other.head.next;
   while(ptr != &other.tail)
   {
      add(ptr->value);
      ptr=ptr->next;
   }
}
/*********************
 * Description: Destructor
 * *******************/
StringList::~StringList()
{
   ListNode *ptr = head.next;
   while(ptr != &tail)
   {
      ListNode *next = ptr->next;
      delete ptr;
      ptr = next;
   }
   head.next = &tail;
   tail.next = &head;
}

/**************************
 * Description: Adds elements
 * to the list.
 * ***********************/
void StringList::add(std::string &value)
{
   ListNode *node = new ListNode();
   node->value=value;
   node->next=&tail;
   tail.next->next = node;
   tail.next=node;
}
/********************
 * Decription: Overloads the real add
 * function to insure string literals
 * work
 * ******************************/
void StringList::add(const char *sValue)
{
   std::string value = sValue;
   add(value);
}
/******************
 * Description: Prints out
 * the list.
 * ***********************
void StringList::dump()
{
   ListNode *ptr = head.next;
   if(ptr!=&tail)
   {
      std::cout << ptr->value;
      ptr = ptr->next;
      for(;ptr!=&tail;ptr=ptr->next)
      {
         std::cout << ", " << ptr->value;
      }
   }
   std::cout << std::endl;
}*/

/****************************
 * Description: Returns the index
 * of a value, -1 if not found.
 * ***************************/
int StringList::positionOf (std::string &value)
{
   bool found = false;
   int position = -1;
   for(ListNode *ptr = head.next; ptr != &tail; ptr = ptr->next)
   {
      position += 1;
      if(ptr->value == value)
      {
         found=true;
         break;
      }
   }
   if(found)
   {
      return position;
   }
   return -1;
}
/********************
 * Decription: Overloads the real positionOf
 * function to insure string literals
 * work
 * ******************************/
int StringList::positionOf(const char *sValue)
{
   std::string value =sValue;
   return positionOf(value);
}
/*********************************
 * Description: Sets the value at
 * the provided subscript, returns
 * a bool based on sucess.
 * *******************************/
bool StringList::setNodeVal(int index, std::string value)
{
   int position = -1;
   for(ListNode *ptr = head.next; ptr!=&tail; ptr=ptr->next)
   {
      position += 1;
      if(position==index)
      {
         ptr->value=value;
         return true;
      }
   }
   return false;
}

/********************
 * Description: Generates
 * then returns a vector from
 * the list.
 * ***********************/
std::vector<std::string> StringList::getAsVector()
{
   std::vector<std::string> list;
   for(ListNode *ptr = head.next; ptr!=&tail; ptr = ptr->next)
   {
      list.push_back(ptr->value);
   }
   return list;
}







