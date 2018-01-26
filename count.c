#include<stdio.h>
int main()
{
int a[5],i,j,temp,count=0;
printf("enter the array values:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
count++;
}
}
printf("\n count is%d",count);
return 0;
}
