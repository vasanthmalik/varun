#include<stdio.h>
int main()
{
int a,b,i,flag;
printf("enter the interval:");
scanf("%d%d",&a,&b);
while(a<b)
{
flag=1;
for(i=2;i<=b/2;i++)
{
if(a%2==0)
{
flag=0;
}
a++;
}
}
if(flag==1)
{
printf("%d",a);
}
return 0;
}
