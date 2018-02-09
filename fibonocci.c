#include<stdio.h>
int main()
{
int lim,i,n=0,n1=1,s;
printf("enter the limit:");
scanf("%d",&lim);
for(i=0;i<lim;i++)
{
    printf("%d",n1);
s=n+n1;
n=n1;
n1=s;

}
return 0;
}
