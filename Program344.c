// off the bit

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT No, UINT Pos)
{
	UINT iAns = 0;
	
	UINT iMask = 0X00000001;
	iMask = iMask << (Pos-1);
	
	iMask = ~iMask;
	
	iAns = No & iMask;
	
	return iAns;	
}


int main()
{
	UINT Value = 0, Position = 0;
	int iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	printf("Enter Position : \n");
	scanf("%d",&Position);
	
	iRet = OffBit(Value,Position);
	
	printf("Updated number is : %d\n",iRet);

	
	return 0; 
}

/*
No = 1	0	1	0	1	1	1	0

Pos = 6

iMask = 0	0	0	0	0	0	0	1
iMask = iMask << (5)

iMask = 0	0	1	0	0	0	0	0

iMask = ~iMask;

iMask = 1	1	0	1	1	1	1	1

			iNo 	1	0	1	0	1	1	1	0
			iMask	1	1	0	1	1	1	1	1	&
			----------------------------------------
			Result 	1	0	0	0	1	1	1	0	
*/



// 1	1	1	1	1	1	1	0		-> asa nahi karu shakat karan left shift jasa karu ki right side zero hotil
