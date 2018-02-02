#include<stdio.h>
int main()
{
int t1,t2,a1,a2,b1,b2;
printf("enter the time1:");
scanf("%d%d",&a1,&a2);
printf("\n enter the time2:");
scanf("%d%d",&b1,&b2);
t1=a1-b1;
t2=a2-b2;
printf("the result is %d:%d",t1,t2);
return 0;
}
