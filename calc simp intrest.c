#include<stdio.h>
int main()
{
	int principle,years,rate,simpleintrest;
	printf("enter principle  :");   
	scanf("%d",&principle);
	printf("enter years  :");   
	scanf("%d",&years);
	printf("enter rate  :");   
	scanf("%d",&rate);
	simpleintrest=(principle*years*rate)/100;
    
	
	printf("simple intrest is %d",simpleintrest);
	return 0;
}
