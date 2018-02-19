#include<stdio.h>
int main()
{
int num,temp;
printf("enter the number:");
scanf("%d",&num);
while(num>=1)
{
temp=num%10;
printf("\n %d",temp);
num/=10;
}
return 0;
}
