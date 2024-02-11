#include<stdio.h>
int main()
{
	int i,sum=0,n=10;
	//for (i=1;i<=n;i++){
	//	sum=sum+i;
	//}
	//while(i<=n){
	//	sum=sum+i;
	//	i++;
	//}
	do{
		printf("the sum is %d",sum);
		i++;
	}while(i<=n);
	//printf("the sum is %d",sum);
   
	return 0;
}

