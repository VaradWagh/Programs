// write a program which accepts number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSum1 = 0, iSum2 = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)		// (8 % 1) = 0
		{
			printf("%d\t",iCnt);
			iSum1 = iSum1 + iCnt;
		}
		else if((iNo % iCnt) != 0)		// (8 % 1) = 0
		{
			printf("%d\t",iCnt);
			iSum2 = iSum2 + iCnt;
		}
	}
	return iSum1-iSum2;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("Difference : %d\n",iRet);
	
	return 0;
}
