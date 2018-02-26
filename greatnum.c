#include<stdio.h>
int main()
{
int num[10],max,i;
printf("enter the numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&num[i]);
}
max=num[0];
for(i=1;i<10;i++)
{
if(num[i]>max)
{
max=num[i];
}
}
printf("\n the greatest number is %d",max);
return 0;
}
