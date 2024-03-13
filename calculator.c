#include <stdio.h>
int main(){
int a,b;
char c;

  printf("enter any character");
   scanf("%c",&c);
  printf("enter any num");
   scanf("%d",&a);

  printf("enter any num");
   scanf("%d",&b);

if(c=='+')
printf("%d",a+b);

else if(c=='-')
printf("%d",a-b);
else if(c=='*')
printf("%d",a*b);
else if(c=='/')
printf("%d",a/b);
return 0;
}