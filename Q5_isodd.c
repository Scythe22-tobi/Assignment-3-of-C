#include<stdio.h>
int main()
{
	//Q5.Scan a number from user.Check if it is even or odd.
	
	int num;
	printf("\nEnter a number=");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\nThe number is even");
	}
	else
	{
		printf("\nThe number id odd");
	}
	return 0;
}
