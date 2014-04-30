//Matthew Garcia
/*

 A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 
 Find the largest palindrome made from the product of two 3-digit numbers.







*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "../helpers/NumberHelper.h"







using namespace std;



int main()
{
    NumberHelper numHelp;

    int max = 0;
    for (int i=100; i<1000;i++)
    {
        //Start at i in order to avoid repeat calculations
        for(int j=i; j<1000;j++)
        {
            int tmp=(i)*(j);
            if(numHelp.isPalindrome(tmp,numHelp.countDigits(tmp)))
            {
                
                if(tmp>max)
                    max=tmp;
            }
        }
    }
    
    
    printf("Largest Palindrome is %d \n",max);
    
    
    
    return 0;
}
