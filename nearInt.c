#include<stdio.h>
int main()
{
int num,eve;
printf("enter the number:");
scanf("%d",&num);
if(num%2==0)
{
eve=num-2;
printf("\n the nearest even number is %d",eve);
}
else
{
eve=num-1;
printf("\n the nearest even number is %d",eve);
}
return 0;
}
