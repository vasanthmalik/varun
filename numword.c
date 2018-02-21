#include<stdio.h>
int main()
{
char a[50],flag,i;
printf("enter the string:");
scanf("%[^\n]s",a);
for(i=0;i!='\0';i++)
{
if(((a[i]>='a')&&(a[i][<='z'))||((a[i]>='A')&&(a[i]<='Z')))
{
flag=1;
}
else if((a[i]>=0)&&(a[i]<=9))
{
flag=2;
}
else
{
flag=0;
}
}
if((flag==1)||(flag==2))
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
