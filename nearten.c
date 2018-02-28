#include<stdio.h>
int main()
{
int num,i;
printf("enter the number:");
scanf("%d",&num);
while(num%10!=0)
{
num++;
}
printf("\n the nearest greater multiple of 10 is %d",num);
return 0;
}
