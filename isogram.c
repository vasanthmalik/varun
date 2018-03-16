#include<stdio.h>
int main()
{
char a[20],flag=0,i;
printf("enter the string:");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==a[i+1])
{
flag+=1;
break;
}
}
if(flag==1)
printf("\n not an isogram");
else
printf("\n it is an isogram");
return 0;
}
