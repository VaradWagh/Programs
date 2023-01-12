#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT No)
{
//	1 2 4 8
	UINT iMask = 8;		// we have to find 4th bit so we have taken 8
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
		printf("4th bit is on\n");
	}
	else
	{
		printf("4th bit is off\n");
	}
	
	return 0; 
}
