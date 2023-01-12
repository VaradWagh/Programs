#include<stdio.h>
#include<stdbool.h>

// 4th bit toggle

typedef unsigned int UINT;
/*
	0	0	0	0	1	0	1	0
	1	1	1	1	0	1	1	1
^
_______________________________________
	1	1	1	1	1	1	0	1		not applicable
	
///////////////////////////////////////////
	
	0	0	0	0	1	0	1	0
	0	0	0	0	1	0	0	0
_______________________________________
	0	0	0	0	0	0	1	0
	
		
	0	0	0	0	0	0	1	0
	0	0	0	0	1	0	0	0
_______________________________________
	0	0	0	0	1	0	1	0	
	
*/


// 0000		0000    0000		0000  ------( bits)
// 0000		1000
// 0X00000008

int ToogleBit(UINT No)
{
	UINT iMask = 0X00000008;
	UINT iAns = 0;
	
	iAns = No ^ iMask;
	
	return iAns;
}


int main()
{
	UINT Value = 11;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	iRet = ToogleBit(Value);
	
	printf("Updated number is : %d\n",iRet);

	return 0; 
}
