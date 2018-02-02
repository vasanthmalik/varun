#include<stdio.h>
int main()
{
int time,hour,mins;
printf("enter the time:");
scanf("%d",&time);
hour=time/60;
mins=time%60;
printf("the time is %d:%d",hour,mins);
return 0;
}
