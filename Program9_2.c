// Accept amount in US dollar and return its corresponding value in Indian currency.
// Consider 1$ = 70Rs

#include<stdio.h>

int DollarToINR(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt <= iNo;)
	{
		iCnt = iNo * 70;
	}
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number in USD : ");
	scanf("%d",&iValue);
	
	iRet = DollarToINR(iValue);
	
	printf("Value in INR is %d\n",iRet);
	
	return 0;
}
