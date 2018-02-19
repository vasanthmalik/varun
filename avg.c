#include<stdio.h>
int main()
{
int a[20],avg,sum=0,i,n;
printf("enter the noOf elements you want:");
scanf("%d",&n);
printf("\n enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum+=a[i];
}
avg=sum/n;
printf("\n the average is %d",avg);
return 0;
}
