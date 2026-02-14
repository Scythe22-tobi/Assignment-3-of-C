#include<stdio.h>
int main()
{
	//Q7.Scan 2 numbers from user,compare them using nested if else.
	
	int num1,num2;
	printf("\nEnter 2 numbers =");
	scanf("%d%d",&num1,&num2);
	
	if(num1>=num2)
	{
		if(num1==num2)
		{
			printf("\nBoth numbers are equal");
		}
		else
		{
			printf("%d is greater than %d",num1,num2);
		}
	}
	else
	{
		printf("%d is smalller than %d",num1,num2);
	}
	
	return 0;
}
