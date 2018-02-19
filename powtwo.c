#include<stdio.h>
int main()
{
int num,temp=0;
printf("enter the number:");
scanf("%d",&num);
while(num!=1)
{
if(num%2!=0)
{
temp=1;
}
num/=2;
}
if(temp==1)
printf("\n it is not power of two");
else
printf("\n it is a power of two");
return 0;
