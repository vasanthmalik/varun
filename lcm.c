#include<stdio.h>
int main()
{
int a,b,x,y,rem,gcd,lcm;
printf("enter the two numbers:");
scanf("%d%d",&a,&b);
x=a;
y=b;
do
{
rem=a%b;
if(rem==0)
break;
else
a=b;
b=rem;
}while(rem!=0);
gcd=b;
lcm=(x*y)/gcd;
printf("\n the lcm is %d",lcm);
return 0;
}
