// Accept two numbers from user and display first number
// in second number of times

// Error(Pending)
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
	// int int = 0;
	for(iNo = 1; iNo <= iFrequency; iNo)
	{
		printf("%d",iNo);
	}
}

int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter the number: ");
	scanf("%d",&iValue);
	
	printf("Enter the frequency: ");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
} 
