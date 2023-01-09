// write a program which accepts number from user and display its factors in decreasing order.

#include<stdio.h>

int MultFactor(int iNo)
{
	int iCnt = 0, iSum = 1;
	int iFact = 0;
	
	for(iCnt = iNo; iCnt <= iNo ; iCnt--)
	{
		//iFact = iNo * iCnt;
		if(iNo % iCnt == 0)
		{
			printf("%d\t",iCnt);
		}
	}
		iSum = iFact * iCnt;
		printf("Output is %d",iSum);
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = MultFactor(iValue);

	printf("%d",iRet);
	
	return 0;
}
