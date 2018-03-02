#include<stdio.h>
int main()
{
int a,b,i,n;
printf("enter the number:");
scanf("%d",&n);
printf("\n enter the range:");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i==n)
{
printf("\n present");
break;
}
}
return 0;
}
