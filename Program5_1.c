// write a program which accepts number from user and display its multiplication of factors

#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)		// (8 % 1) = 0
		{
			printf("%d\t",iCnt);
			iFact = iFact * iCnt;
		}
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	 
	printf("Multiplication of factors : %d",iRet);
	
	return 0;
}
