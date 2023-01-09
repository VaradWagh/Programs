// write a program which accepts number from user and display its non factors

#include<stdio.h>

void NonFact(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) != 0)		// (8 % 1) = 0
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	NonFact(iValue);
	
	return 0;
}
