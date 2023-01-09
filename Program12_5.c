// Write a program which accepts number from user and count frequency of such digits which are less than 6

#include<stdio.h>

int Count(int iNo)
{		
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		
		if(iDigit < 6)
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
	
	iRet = Count(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}
