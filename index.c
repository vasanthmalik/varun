#include<stdio.h>
int main()
{
int i,n,a[n];
printf("enter the size of the array:");
scanf("%d",&n);
printf("\n enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n the values with their index values are:");
for(i=0;i<n;i++)
{
printf("%d\t%d",a[i],i);
printf("\n");
}
return 0;
}
