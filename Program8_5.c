// Write a program which accept number from user and display its table in reverse order

#include<stdio.h>

void TableRev(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = iNo*2; iCnt > 0; iCnt--)
	{
		printf("%d \t",iNo*iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	TableRev(iValue);
	
	return 0;
}
