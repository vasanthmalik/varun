#include<stdio.h>
int main()
{
int num,dig;
printf("enter the number:");
scanf("%d",&num);
while(num!=0)
{
dig=num%10;
rev=rev*10+dig;
num/=10;
}
while(rev!=0)
{
dig=rev%10;
if(dig%2!=0)
{
printf("\t%d",dig);
}
rev/=10;
}
return 0;
}
