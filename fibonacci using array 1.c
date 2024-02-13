#include<stdio.h>
int main()

{
	int  n ;
	printf("enter valvue of n (n>1)");
	scanf("%d",&n);
	
	
	int fibb[n];
	fibb[0]=0;
	fibb[1]=1;
	
	printf("%d \t %d \t ", fibb[0], fibb[1]);
	
	for(int i=2;i<n;i++){
		fibb[i]= fibb[i-1] + fibb[i-2];
		printf("%d \t", fibb[i]);
	}

	return 0;
}

