// write a program which accepts one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt = 0;
	if(iNo <= 0)
	{
		return 0;
	}
	for(iCnt = 2; iCnt <= iNo*2; iCnt+=2)
	{
		printf("%d \t",iCnt);
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);

	return 0;
}
