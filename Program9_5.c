// Write a program to find even factorial and odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	int iFact2 = 1;	
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        /* Check even condition before printing */
        if(iCnt%2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
	for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        /* Check even condition before printing */
        if(iCnt%2 != 0)
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return iFact - iFact2;
} 
		

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = FactorialDiff(iValue);
	
	printf("Factorial difference is %d\n",iRet);
	
	return 0;
}
