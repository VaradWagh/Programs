// Write a program which accepts number from user and return the count of odd digits

#include<stdio.h>

int CountOdd(int iNo)
{		
	int iCnt = 0, iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		
		if(iDigit % 2 != 0)
		{
			iCnt++;	
		}	
	}
	return iCnt;	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
