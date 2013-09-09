//Matthew Garcia
#include "NumberHelper.h"

bool NumberHelper::isEven(int num)
{

	if(num%2==0)
		return true;
	else
		return false;


}

bool NumberHelper::isOdd(int num)
{
	if(num%2==1)
		return true;
	else
		return false;


}

int NumberHelper::nthFibNum(int num)
{
	int currentNum=0;

	int nMinus1=1;
	int nMinus2=0;
	if(num==0)
	{
		
		return currentNum;
	}
	if(num==1)
	{
		currentNum=1;
		return currentNum;	
	}
	
	for(int i=2; i<=num;i++)
	{
		currentNum= (nMinus1)+(nMinus2);
		nMinus2=nMinus1;
		nMinus1=currentNum;	

		
	}

	return currentNum;

}

