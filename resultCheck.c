#include<stdio.h>
int main()
{
int a,b,sum;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
sum=a+b;
if(sum%2==0)
{
printf("\n the result is even");
}
else
{
printf("\n the result is odd");
}
return 0;
}
