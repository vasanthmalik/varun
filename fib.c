#include<stdio.h>
int main()
{
int n,first=1,second=1,i,next;
printf("enter the range of series:");
scanf("%d",&n);
printf("\n%d %d",first,second);
for(i=0;i<n;i++)
{
next=first+second;
printf("\t%d",next);
first=second;
second=next;
}
return 0;
}
