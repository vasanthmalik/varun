#include<stdio.h>
int main()
{
char a[30];
int i,flag1=0,flag2=0;
printf("enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122)))
{
flag1=1;
}
else if((a[i]>=48)&&(a[i]<=57))
{
flag2=1;
}
}
if((flag1==1)&&(flag2=1))
{
printf("\n both letters and numbers are present");
}
return 0;
}

