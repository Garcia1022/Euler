/*
MATTHEW GARCIA
PROBLEM 3 PROJECT EULER
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?



*/

#include "math.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;



int main()
{

double num= 600851475143;
double biggestPrime=2;
double square= floor(sqrt(num));
cout<<square<<endl;

double i =floor(   (floor( ((num/2)-1)/6 ) )   /2);
while( (((6*i)+1)<=floor(num/2)) && (((6*i)-1)<=floor(num/2)) )
{
	int plusOne=(6*i)+1;
	int minusOne=(6*i)-1;
	if(fmod(num,minusOne) ==0)
	{
		if(minusOne > biggestPrime )
			biggestPrime=minusOne;
	}
	if(fmod(num,plusOne)==0)
	{
		if(plusOne > biggestPrime)
			biggestPrime=plusOne;
	}




i++;
}
cout <<"The Biggest Prime Factor is : "<< biggestPrime <<endl;







return 0;
}





