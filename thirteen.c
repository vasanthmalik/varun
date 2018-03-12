#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num%13==0)
printf("\n yes it is multiple of 13");
else
printf("\n it is not a multiple of 13");
return 0;
}
