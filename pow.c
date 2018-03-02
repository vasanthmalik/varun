#include<stdio.h>
int main()
{
int a,b,i,c,n;
printf("enter the number:");
scanf("%d",&a);
for(i=1;i<=n;i++)
{
n=pow(2,a);
if(a>n)
{
b=i;
break;
}
}
c=pow(2,b);
printf("\n te nearest power of two is %d",c);
return 0;
}
