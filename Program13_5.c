// Write a program which accepts number from user and return the difference between summation of even and odd digits

#include<stdio.h>

int CountDiff(int iNo)
{		
	int iCnt = 0, iDigit = 0, iSum = 0, iOddSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		
		if(iDigit % 2 == 0)
		{
			iSum = iSum + iDigit;
		}
		else
		{
			iOddSum = iOddSum + iDigit;
		}
	}
	return iSum - iOddSum;	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
