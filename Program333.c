#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT No)
{
//	1 2 4 8 16 32 64 128 256 512
	UINT iMask = 512;		// we have to find 10th bit so we have taken 512
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
