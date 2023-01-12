#include<stdio.h>
#include<stdbool.h>

// Check 7,8,9th bit

typedef unsigned int UINT;

// 
// 0000		0000	0000	0000	0000	0001	1100	0000 (32 bits)
//  0		  0		  0		  0		  0		 1	  	  C		  0
// 000001C0 = hexadecimal
// 0X000001C0	= 8bit every digit = 32 byte

bool CheckBit(UINT No)
{
//	1 2 4 8 16 32 64 128 256 512
	UINT iMask = 0X000001C0;		// we have to find 12th bit 
	UINT Result = 0;
	
	Result = No & iMask;
	if(Result == iMask)	// chalu asel tar 1 value yenar
	{
		return true;
	}
	else				// zero
	{	
		return false;
	}
}


int main()
{
	UINT Value = 11;
	bool bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	bRet = CheckBit(Value);
	
	if(bRet == true)
	{
		printf("12th bit is on\n");
	}
	else
	{
		printf("12th bit is off\n");
	}
	
	return 0; 
}
