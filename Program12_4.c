// Write a program which accepts number from user and count frequency of 4 in it

#include<stdio.h>

int CountFour(int iNo)
{		
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		
		if(iDigit == 4)
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
	
	iRet = CountFour(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
