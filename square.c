#include<stdio.h>
int main()
{
int a,b,c,i,flag=0;
printf("enter the numbers:");
scanf("%d%d",&a,&b);
c=a*b;
for(i=1;i<c/2;i++)
{
if(i*i==c)
{
flag=1;
break;
}
}
if(flag==1)
printf("\n it is perfect square");
else
printf("\n it is not a perfect square");
return 0;
}
