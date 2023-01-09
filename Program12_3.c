// Write a program which accepts number from user and count frequency of 2 in it

#include<stdio.h>

int CountTwo(int iNo)
{		
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		if(iDigit == 2)
		{
			iCnt++;
		}
	}
	return iCnt++;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = CountTwo(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
