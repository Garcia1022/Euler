//Matthew Garcia
/*

 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 
 What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?




*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "../helpers/NumberHelper.h"







using namespace std;



int main()
{
    NumberHelper numHelp;
    bool isValid=false;
    int min = 0;
    //will break out if we exceed the max value of an int
    for (int i=20; i!=-1;i++)
    {
        //Start at i in order to avoid repeat calculations
        for(int j=20; j>1;j--)
        {
            
            if(numHelp.isEvenlyDivisibleBy(i,j))
            {
                
                isValid=true;
            }
            else
            {
            isValid=false;
            break;
            }
        }
        if(isValid)
        {
            min = i;
            break;
        }
    }
    
    
    printf("Smallest number is %d \n",min);
    
    
    
    return 0;
}
