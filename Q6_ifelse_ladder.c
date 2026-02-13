#include<stdio.h>
int main()
{
	//Q6.Scan 2 numbers from user,compare them using else_if ladder.
	
	int num1,num2;
	printf("\nEnter 2 numbers=");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("\nThe %d is greater than %d",num1,num2);
	}
	else if(num1<num2)
	{
		printf("The %d is lesser than %d",num1,num2);
	}
	else
	{
		printf("\nBoth are equal");
	}
	
	return 0;
}
