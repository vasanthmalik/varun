#include<stdio.h>
int main()
{
int a,b,pro;
printf("enter the numbers:");
scanf("%d %d",&a,&b);
pro=a*b;
if(pro%2==0)
{
printf("\n the product is even");
}
else
{
printf("\n the product is odd");
}
return 0;
}
