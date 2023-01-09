// Accept one character from user and convert case of that character

#include<stdio.h>

int DisplayConvert(char CValue)
{
	if((CValue >= 97) && (CValue <= 122))
	{
		CValue = CValue - 32;
		printf("%c",CValue);
	}
	else if((CValue >= 65) && (CValue <= 90))
	{
		CValue = CValue + 32;
		printf("%c",CValue);
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter Character");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}
