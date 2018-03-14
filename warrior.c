#include<stdio.h>
int main()
{
int a,b,i;
printf("enter the two numbers");
for(i=0;i<3;i++)
{
scanf("%d%d",&a,&b);
if(a>b)
{
  printf("the difference is %d",a-b);
  }
  else
  {
  printf("\n the difference is %d",b-a);
  }
  return 0;
  }
