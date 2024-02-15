#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("the series is &d terms is %d\n",fibonacci(i));
		
	}
	return 0;
}
fibonacci(int n){
	if (n==0){
		return 0;
	}
	else if(n==1){
		return 1;
		
	}
	else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}

