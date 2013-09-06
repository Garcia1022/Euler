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
		P1();
	};
	P1::P1()
	{
	runningCount=0;
	argument1=0;
	argument2=0;	
	}
     bool P1::isMultiple(int num){
		if(num % argument1==0 | num % argument2 ==0  )
			return true;
		else
			return false;
		
	}	





int main (int argc, const char* argv[])
	{
		printf("number of args %d\n",argc);
		//we need to filter out the first argument...
		
		if ((argc-1)<2 | (argc-1) >2)
		{
			printf("Invalid arguments. Please enter two arguments you want to test against\n");
		return 0;		
		}		
		P1* object= new P1();

		object->argument1= atoi(argv[1]);
		object->argument2= atoi(argv[2]);
		
		//start at 1 since the problem appears to not include 0 in the set of natural numbers
		for(int i=1; i<1000;i++){

			if(object->isMultiple(i))
				object->runningCount++;

		}

		printf("count is %d\n",object->runningCount);



	return 0;
	}








