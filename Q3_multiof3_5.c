#include<stdio.h>
int main()
{
	//Q3.Scan a number from user.Print correct input if it is multiple of 3 or 5.
	//Otherwise print wrong input.
	
	int num;
	
	printf("\nEnter a number=");
	scanf("%d",&num);
	
	if((num%3 && num%5)==0)	
	{
		printf("\nThe number is multiple of 3 nd 5");
	}
	else
	{
		printf("\nThe number is not the multiple of 3 and 5");
	}
	
	return 0;
}
