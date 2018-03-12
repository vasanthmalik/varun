#include<stdio.h>
int main()
{
int i,n,flag;
printf("enter the number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==1)
printf("\n it is composite number");
else
printf("\n not a composite number");
return 0;
}
