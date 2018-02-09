#include<stdio.h>
int main()
{
int num,n1,n2;
printf("enter the number:");
scanf("%d",&num);
printf("\n enter the limits:");
scanf("\n %d\t%d",&n1,n2);
if((num>=n1)&&(num<=n2))
{
printf("\n it is in the range");
}
else
{
printf("\n not in the range");
}
return 0;
}
