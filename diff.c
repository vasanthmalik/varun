#include<stdio.h>
int main()
{
int a,b,di;
printf("enter the numbers to find difference:");
scanf("%d%d",&a,&b);
di=a-b;
if(di%2==0)
{
printf("\n the difference is even");
}
else
{
printf("\n the difference is odd");
}
return 0;
}
