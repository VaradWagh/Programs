// write a program which accepts number from user and display its factors in descending order

#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 0;
	int iFact = 0;
	
	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		if((iNo % iCnt) == 0)		// (8 % 1) = 0
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
	
	FactRev(iValue);
	
	return 0;
}
