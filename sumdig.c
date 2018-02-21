#include<stdio.h>
int main()
{
int num,sum=0,temp;
printf("enter the number:");
scanf("%d",&num);
while(num>0)
{
temp=num%10;
sum+=temp;
num/=10;
}
printf("\n the sum of digits is %d",sum);
return 0;
}
