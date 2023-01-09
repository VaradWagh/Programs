// Write a program which accepts distance in kilometre and convert it ino meter
// (1 kilometre = 1000 meter)

#include<stdio.h>

int KMtoMeter(int iNo)
{
	int iCal = 0;

	iCal = iNo * 1000;

	return iCal;
}

int main()
{
	int iValue1 = 0.0;
	int iRet = 0.0;
	
	printf("Enter distance: ");
	scanf("%d",&iValue1);
	
	iRet = KMtoMeter(iValue1);
	
	printf("Distance is : %d\n",iRet);
	
	return 0;
}
