// Write a program which accepts number from user and check whether it contains 0 in it or not
// Invalid output
#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{		
	int iCnt = 0, iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		
		if(iDigit == 0)
		{
			iCnt++;
			return true;
		}
		else
		{
			iCnt++;
			return false;
		}
	}
	
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == true)
	{
		printf("It contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}	
	
	return 0;
}
