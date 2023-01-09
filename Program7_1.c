// write a program which accepts number from user and print that number of $ & * on screen

#include<stdio.h>

void Pattern(int iNo)
{
	if(iNo <= 0)
	{
		iNo = -iNo;	
	}
	
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("$\t*\t");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	Pattern(iValue);
		
	return 0;
}
