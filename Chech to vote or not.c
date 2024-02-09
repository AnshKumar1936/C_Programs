#include<stdio.h>
int main()
{
	int age;
	printf("enter the age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You can vote",age);
	}
	else
	{
		printf("You cannot vote",age);
	}
	
	return 0;
}
