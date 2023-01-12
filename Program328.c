#include<stdio.h>

int CountOnBits(unsigned int No)
{
	int iCnt = 0;
	int Digit = 0;
	
	while(No != 0)
	{
		Digit = No % 2;
		printf("%d",Digit);
		if(Digit == 1)
		{
			iCnt++;
		}
		No = No / 2;
	}
	return iCnt;
}

int main()
{
	unsigned int Value = 11;
	int Ret = 0;
	
	printf("Enter number : \n");
	scanf("%d",&Value);
	
	Ret = CountOnBits(Value);
	
	printf("\nNumber of bits which are ON are : %d",Ret);
	
	
	return 0; 
}
