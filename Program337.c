#include<stdio.h>
#include<stdbool.h>

// 4th bit off

typedef unsigned int UINT;

// No 		1	0	1	1	1	0	0	1

// Mask 	1	1	1	1	0	1	1	1

// ----------------------------------------

//	Result
///////////////////////////////////////////////
// 0000		0000	0000	0000	0000	0001	1100	0000 (32 bits)
// 1111		1111	1111	1111	1111	1111	1111	0111

// 0XFFFFFFF7 (F is 0)

int OffBit(UINT No)
{
	UINT iMask = 0XFFFFFFF7;
	
	return (No & iMask);	// refer file Program338.c
}


int main()
{
	UINT Value = 11;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	iRet = OffBit(Value);
	
	printf("Updated number is : %d\n",iRet);

	printf("");

	
	return 0; 
}
