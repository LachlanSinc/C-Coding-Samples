/*******************
 * Author: Lachlan Sinclair
 * Date: 3/6/2019
 * Description: ListNode
 * class decleration file.
 * ******************/
#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP
#include <string>
#include <vector>

class StringList
{

   protected:
      struct ListNode
      {
         std::string value;
         ListNode *next;

      };  
      //Head and tail for list
      ListNode head;
      ListNode tail;

      void initialize();
   public:
      //Default constructor
      StringList()
         {initialize();} 

      StringList(const StringList &);
      ~StringList();
      void add(std::string&);
      void add(const char *);
      //void dump();
      int positionOf(std::string&);
      int positionOf(const char *);
      bool setNodeVal(int, std::string);
      std::vector<std::string> getAsVector();

};
#endif
