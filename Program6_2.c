// write a program which accepts one number from user and check whether that number is greater than 100 or not

#include<Stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt > 100; iCnt++)
	{
		return iCnt;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	bRet = ChkGreater(iValue);
	
	if(iValue > 100)
	{
		printf("Greater \n");
	}
	else
	{
		printf("Smaller \n");
	}

	return 0;
}
