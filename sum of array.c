#include<stdio.h>
int main()
{
	int sum=0,n;
	int array[10]= {1,2,3,4,5,6,7,8,9,0};
	for(n=9;n>=0;n--){
		sum=sum+array[n];
		
	}
	
	printf("sum of array is %d",sum);

	return 0;
}

