//Matthew Garcia
/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.




*/


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "NumberHelper.h"

using namespace std;



int main()
{

	NumberHelper numHelp;
	long sum=0;
	int  currentFib=0;
	for(int i=0;currentFib<4000000;i++)
	{
		 currentFib=numHelp.nthFibNum(i);
		
		if(numHelp.isEven(currentFib))
			sum=sum+currentFib;

	}	
	printf("The sum of the even numbers less than 4 million within the Fibonacci sequence is: %lu \n",sum);	
	








return 0;
}



