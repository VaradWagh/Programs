// Write a program which accept temperature in Fahrenheit and convert it into celsius.
// (1 celsius = ((Fahrenheit - 32) * (5/9))

#include<stdio.h>

double FhtoCs(int iTemp)
{
	float fCelsius = 0.0;

	fCelsius = ((iTemp - 32.0) * (5.0/9.0));

	return fCelsius;
}

int main()
{
	int iValue1 = 0.0;
	double dRet = 0.0;
	
	printf("Enter temperature in Fahrenheit : ");
	scanf("%d",&iValue1);
	
	dRet = FhtoCs(iValue1);
	
	printf("Tempertaure in Celsius is : %f\n",dRet);
	
	return 0;
}
