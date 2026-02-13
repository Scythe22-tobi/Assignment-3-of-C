#include<stdio.h>
int main()
{
	//Q1.Scan a number from user.Print correct input if it lies between 10 and 20.
	
	int num;
	printf("\nEnter a number=");
	scanf("%d",&num);
	
	if(num>=10 && num<=20)
	{
		printf("\nThe number lies between 10 and 20");
	}
	else
	{
		printf("\nThe number doesnt lie between 10 and 20");
	}
	
	return 0;
}
