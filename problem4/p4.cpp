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
    int p = 11112;
    int x=numHelp.countDigits(p);
    printf("your digits %d \n",x);
    
    bool x2 = numHelp.isPalindrome(p,numHelp.countDigits(p));
    
    printf("your digits %d \n",x2);
    
    
    
    return 0;
}
