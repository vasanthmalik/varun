#include<stdio.h>
int main()
{
int a,b,i;
char sign;
printf("enter the first number then operation themn second number:");
for(i=0;i<5;i++)
{
scanf("%d %c %d",&a,&sign,&b);
if(sign=='/')
printf("\nthe division is %d",a/b);
else if(sign=='%')
printf("\nthe modulo is %d",a%b);
}
return 0;
}
