// write a program which accepts number from user and return summation of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)		// (8 % 1) = 0
		{
			printf("%d\t",iCnt);
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	
	printf("Summation of non factors are : %d\n",iRet);
	
	return 0;
}
