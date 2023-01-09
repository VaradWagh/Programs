// write a program which accepts total marks and obtained marks from user and calculate percentage

#include<stdio.h>


float Percentage(float fNo1, float fNo2)
{	
	float fPercent = 0.0;
	
	fPercent = (fNo1*100)/fNo2;
	
	return fPercent;
}

int main()
{
	float fValue1 = 0, fValue2 = 0;
	float fRet = 0.0;
	
	printf("Enter your marks : ");
	scanf("%f",&fValue1);
	
	printf("Enter obtained marks : ");
	scanf("%f",&fValue2);
	
	fRet = Percentage(fValue1, fValue2);
	
	printf("Percentage : %f",fRet);
	
	return 0;
}
