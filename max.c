#include<stdio.h>
int main()
{
int a[10],i,g;
printf("enter the 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
g=a[0];
for(i=1;i<10;i++)
{
if(a[i]>g)
{
g=a[i];
}
}
printf("the largest number is %d",g);
return 0;
}
