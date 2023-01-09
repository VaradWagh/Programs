// Write a program which accepts radius of circle from user and calculate its area.
// Consider value of PI as 3.14 (Area = PI * Radius * Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
	double Area = 0.0;

	Area = 3.14 * fRadius * fRadius;

	return Area;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter number : ");
	scanf("%f",&fValue);
	
	dRet = CircleArea(fValue);
	
	printf("Radius of entered number is : %f\n",dRet);
	
	return 0;
}
