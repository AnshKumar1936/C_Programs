#include<stdio.h>
int main()
{
	int i=0,n,prime=1;
	printf("enter the no.");
	scanf("%d",&n);
	for (i=2;i<n;i++){
		if(n%i==0){
			prime=0;
			break;
		}
	}
	if (prime==1)
	{
		printf("this is  a prime no");
		
	}
	else{
		printf("this is not a prime no");
	}

	return 0;
}

