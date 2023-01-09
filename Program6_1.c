// write a program which accepts name from user and print that name

#include<stdio.h>

int main()
{
	char Name[30];
	
	printf("Enter full name: ");
	scanf("%[^\n]*c",&Name);	// will help you to get a entire sentence until the next line isn’t encountered “\n” or enter is pressed which is done with the help of “%[^\n]” here [ ] is the scan set character . the ”%*c” will read the newline character , asterisk ” * ” is used to indicate that the next line character is discarded.
	
	printf("Your name is %s \n",Name);

	return 0;
}
