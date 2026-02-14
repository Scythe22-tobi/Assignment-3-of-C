#include<stdio.h>
int main()
{
	//Q8.Scan 3 numbers from user.Find the largest integer.(Using conditional operator)
	
	int num1,num2,num3;
	printf("\nEnter 3 integers=");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	int max;
	max=num1>num2?num2:num1;
	max=max>num3?max:num3;
	
	printf("\nThe largest number = %d",max);
	
	return 0;
}
