// write a program which accepts number from user and print its number line

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo; iCnt >= iNo-1; iCnt--)
	{
		printf("-%d\t",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	Display(iValue);
		
	return 0;
}
