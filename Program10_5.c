// Write a program which accept area in square feet and convert it into square meter
// (1 square feet = 0.0929 square meter)

#include<stdio.h>

double SquareMeter(int iValue)
{
	float fResult = 0;

	fResult = iValue * 0.0929;

	return fResult;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter area in square feet : ");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);
	
	printf("Square meter is : %f\n",dRet);
	
	return 0;
}
