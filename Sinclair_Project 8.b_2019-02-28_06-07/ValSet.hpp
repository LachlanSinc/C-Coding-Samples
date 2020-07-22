/********************************
 * Author: Lachlan Sinclair
 * Date: 2/27/2019
 * Decription: Templated set
 * class with plenty of methods
 * and overidden operators.
 * *****************************/


#ifndef VALSET_HPP
#define VALSET_HPP
#include <vector>

template <class T>
class ValSet
{

   private:
      int arraySize, numVals;
      T *aptr;
 
      void doubleSize();      
      

   public:
   
      //default contructor
      ValSet();
      //copy constructor
      ValSet(const ValSet &);
      //destructor
      ~ValSet(){delete [] aptr; aptr = nullptr;}
     
      
      bool contains(T val) const;
      void add(T val);
      bool isEmpty();
      int size();
      void remove(T val);
      std::vector<T> getAsVector();


      T &operator[](int);
      ValSet& operator=(const ValSet &obj);
      ValSet<T> operator+(const ValSet &obj);
      ValSet<T> operator*(const ValSet &obj);
      ValSet<T> operator/(const ValSet &obj);
     
      //handles bad bracket indexes
      class IllegalIndex
      {
         public:
            int badIndex;
            IllegalIndex(int err)
            {badIndex=err;}
      };


};
#endif
/*************************
 * Description: Default 
 * constructor.
 * **********************/ 
template <class T>
ValSet<T>::ValSet()
{
   arraySize = 10;
   numVals = 0;
   aptr = new T[10];

}
/*************************
 * Description: Copy constructor
 * **********************/ 
template <class T>
ValSet<T>::ValSet(const ValSet &obj)
{
   numVals=obj.numVals;//size();
   arraySize = obj.arraySize;//getArraySize();
   aptr = new T[arraySize];
   for(int count = 0; count<numVals; count++)
      aptr[count]=obj.aptr[count];
   
}
/*************************
 * Description: Doubles the 
 * size of the array.
 * **********************/ 
template <class T>
void ValSet<T>::doubleSize()
{  
   T *tptr = new T[arraySize*2];
   for(int count=0; count<numVals;count++)
      tptr[count]=aptr[count];
  
   arraySize *=2;
   delete [] aptr;
   aptr=tptr;      
}
/*************************
 * Description: Adds a value
 * to the set.
 * **********************/ 
template <class T>
void ValSet<T>::add(T val)
{
   if(!contains(val))
   {
      if(numVals>=arraySize)
      {
         doubleSize();
      }
      aptr[numVals]=val;
      numVals++;
   }
}
/*************************
 * Description: Removes a 
 * value from the set.
 * **********************/ 
template <class T>
void ValSet<T>::remove(T val)
{
   int index;
   bool found = false;
   for(int count = 0; count<numVals; count++)
   {
      if(aptr[count]==val)
      {
         index = count;
         found = true;
         break;
      }
   }
   if(found)
   {
      for(index; index<numVals-1;index++)
      {
         aptr[index]=aptr[index+1];
      }
      numVals--;
   }   
}
/*************************
 * Description: Returns true
 * if the set contains the value.
 * **********************/ 
template <class T>
bool ValSet<T>::contains(T val) const
{
   for(int count=0; count<numVals;count++)
   {
      if(aptr[count]==val)
         return true;
   }
   return false;
}
/*************************
 * Description: Returns true
 * if the set is empty.
 * **********************/ 
template <class T>
bool ValSet<T>::isEmpty()
{
   if(numVals==0)
      return true;
   return false;
}
/*************************
 * Description: Returns the 
 * number of values in the array.
 * **********************/ 
template <class T>
int ValSet<T>::size()
{
   return numVals;
}
/*************************
 * Description: Overrides the = 
 * operator to create a copy of the
 * passed object.
 * **********************/ 
template <class T>
ValSet<T>& ValSet<T>::operator=(const ValSet &obj)
{
   numVals=obj.numVals;
   arraySize = obj.arraySize;
   aptr = new T[arraySize];
   for(int count = 0; count<numVals; count++)
      aptr[count]=obj.aptr[count];
   return *this;
}
/*************************
 * Description: Overides the + operator
 * to create the union of two sets
 * **********************/ 
template <class T>
ValSet<T> ValSet<T>::operator+(const ValSet &obj)
{
   ValSet<T> temp(*this);
   for(int count =0; count<obj.numVals;count++)
      temp.add(obj.aptr[count]);
   return temp;
}
/*************************
 * Description: Overides the *
 * operator to create the intersection
 * of two sets.
 * **********************/ 
template <class T>
ValSet<T> ValSet<T>::operator*(const ValSet &obj)
{
   ValSet<T> temp;
   for(int count =0; count<this->numVals; count++)
   {
      if(obj.contains(this->aptr[count]))
         temp.add(this->aptr[count]);
   }
   return temp;
}
/*************************
 * Description: Overides the
 * dash operator to make a 
 * symetric overload
 * **********************/ 
template <class T>
ValSet<T> ValSet<T>::operator/(const ValSet &obj)
{
   ValSet<T> temp;
   for(int count =0; count<this->numVals; count++)
   {
      if(!(obj.contains(this->aptr[count])))
         temp.add(this->aptr[count]);
   }
   for(int count=0; count<obj.numVals;count++)
   {
      if(!(this->contains(obj.aptr[count])))
         temp.add(obj.aptr[count]);
   }
   return temp;
}
/*******************
 * Description: Used to 
 * return values from the
 * array.
 * *****************/
template <class T>
T &ValSet<T>::operator[](int sub)
{
   if(sub<0 ||sub>=numVals)
      throw IllegalIndex(sub);
   return aptr[sub];
}
/*************************
 * Description: Converts the 
 * array to a vector.
 * **********************/ 
template <class T>
std::vector<T> ValSet<T>::getAsVector()
{
   std::vector<T> vect;
   for(int count =0; count<numVals; count++)
      vect.push_back(aptr[count]);
   return vect;
}


 
