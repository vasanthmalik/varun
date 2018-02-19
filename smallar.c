#include<stdio.h>
int main()
{
int a[20],n,i,temp1,temp2,c;
printf("enter the noOf elements you want:");
scanf("%d",&n);
printf("\n enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
temp1=a[0];
for(i=1;i<=n;i++)
{
if(temp1<a[i])
{
c=temp1;
temp1=a[i];
a[i]=c;
}
}
printf("\n the largest number is %d",temp1);
temp2=a[0];
for(i=1;i<=n;i++)
{
if(temp2>a[i])
{
c=temp2;
temp2=a[i];
a[i]=c;
}
}
printf("\n the small number is %d",temp2);
return 0;
}
