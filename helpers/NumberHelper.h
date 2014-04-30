//Matthew Garcia
/*
A class that I will use and expand further as I solve problems.


*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stack>

#ifndef NUMBERHELPER_H
#define NUMBERHELPER_H

class NumberHelper{


	public:
		bool isEven(int num);
		bool isOdd(int num);
		int  nthFibNum(int num);
        int countDigits(int num);
    bool isEvenlyDivisibleBy(int num,int divisor);
    bool isPalindrome(int num,int digitCount);



};

#endif
