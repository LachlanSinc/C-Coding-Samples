/**********************
 * Author: Lachlan Sinclair
 * Date: 2/22/2019
 * Description: Returns the 
 * average area of all of the 
 * shapes pointed to by a vector
 * full of pointers to shapes.
 * ************************/
#include <vector>
#include "Shape.hpp"

double averageArea(std::vector<Shape*> shapes) 
{
    double result = 0L;
    int size = shapes.size();
    //loop through all elements add areas
    //to the total
    for(int i = 0; i < size; i++) {
        if( shapes[i] != nullptr ) {
            result += shapes[i]->area();
        }
    }
    return result / ((double) size);
}



