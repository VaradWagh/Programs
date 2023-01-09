// write a program which accepts N and print first 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t",iCnt*iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	MultipleDisplay(iValue);
		
	return 0;
}
