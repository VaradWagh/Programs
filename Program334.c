#include<stdio.h>
#include<stdbool.h>

// Check 10th bit

typedef unsigned int UINT;

// 
// 0000		0000	0000	0000	0000	0010	0000	0000 (32 bits)
//  0		  0		  0		  0		  0		 2	  	  0		  0
// 00000200 = hexadecimal
// 0X00000200	= 8bit every digit = 32 byte

bool CheckBit(UINT No)
{
//	1 2 4 8 16 32 64 128 256 512
	UINT iMask = 0X00000200;		// we have to find 10th bit 
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
		printf("10th bit is on\n");
	}
	else
	{
		printf("10th bit is off\n");
	}
	
	return 0; 
}
