//Matthew Garcia
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.


*/



#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


class P1{

	
	public:
		int runningCount;
		int argument1;
		int argument2;
		
		bool isMultiple(int num);
	};

     bool P1::isMultiple(int num){
		if(num % argument1==0 | num % argument2 ==0  )
			return true;
		else
			return false;
		
	}	





int main (int argc, const char* argv[])
	{

		








	}








