/*****************
 * Author: Lachlan Sinclair
 * Date: 3/6/2019
 * Description: Applies
 * post fix evaluation to a 
 * c-style string.
 * ***********************/
#include <stack>
#include <string.h>
#include <ctype.h>
#include <cstdlib>
#include <cstring>

double postfixEval(const char *str)
{

   std::stack<double> registers;
   double result;

   if(registers.size())
   {
      registers.push(0);
   }
   
   //copy the c-style string
   int length = strlen(str)+1;
   char *line = new char[length];
   strcpy(line, str);

   //use strtok to parse through
   //the string
   char *token = strtok(line, " ");
   while(token != nullptr)
   {
      int firstCharacter =*token;
      if(isdigit(firstCharacter))
      {
         double value = atof(token);
         registers.push(value);
      }
      else
      {
         //use an array to insure
         //correct order of operations
         double r[2];
         for(int i=1; i>=0; i--)
         {
            if(registers.empty())
            {
               //error
            }
            else
            {
               r[i] = registers.top();
               registers.pop();
            }
         }
         //switch statement user to determine
         //which operator to apply to values
         double result;
         switch(*token)
         {
            case '*':
               result = r[0] * r[1];
               break;
            case '/':
               result = r[0] / r[1];
               break;
            case '+':
               result = r[0] + r[1];
               break; 
            case '-':
                result = r[0] - r[1];
                break;
            default:
               //error
               break;
         }
         registers.push(result);
      }
      //move to next token
      token = strtok(nullptr, " ");
   }
   
   if(registers.empty())
   {
      //error
   }
   else
   {   //set result to the final value
       result = registers.top();
       registers.pop();
   }
   //prevent memory leak
   delete line;
   return result;
}


