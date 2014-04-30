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

int NumberHelper::countDigits(int num)
{
    int numDigits=1;
    int upperLimit=10;
    while(1)
    {
        if(upperLimit<=num)
        {
            numDigits++;
            upperLimit=upperLimit*10;
        }
        else
            break;
    }
    return numDigits;
    
}
bool NumberHelper::isPalindrome(int num,int digitCount)
{
    std::stack<int> numStack;
    
    //2 cases
    
    //even digit count
    if(digitCount== 1)
        return true;
    
    else if((digitCount%2) == 0)
    {
        int half=digitCount/2;
        for(int i=1;i<=half;i++)
        {
            numStack.push(num%10);
            num=num/10;
        }
        for(int j=1;j<=half;j++)
        {
            if(!numStack.empty())
            {
               
                
            if((num%10) != numStack.top())
                return false;
            numStack.pop();
            num=num/10;
            }
        }
    }
    
    // odd digit count
    else
    {
        int iterations= (digitCount-1)/2;
        int mid = iterations + 1;
        
        for(int k=1;k<=iterations;k++)
        {
            numStack.push(num%10);
            num=num/10;
        }
        //no need to check the mid number
        num=num/10;
        for(int l=1;l<=iterations;l++)
        {
            if(!numStack.empty())
            {
                
                
                if((num%10) != numStack.top())
                return false;
                numStack.pop();
                num=num/10;
            
            }
        }
    }
    
    
    return true;
    
}