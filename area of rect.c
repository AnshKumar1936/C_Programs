#include<stdio.h>
int main()
{
	int length , breadth , area;
	printf("enter two numbers :");
	scanf("%d%d",&length,&breadth);
	area= length*breadth;
	
	printf("the area of rectangle is %d",area);
	return 0;
}
