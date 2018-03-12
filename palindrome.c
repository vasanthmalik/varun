#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
int i,flag=0,len;
printf("enter the string");
scanf("%s",str);
len=strlen(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]!=str[len-1-i])
flag=1;
}
if(flag)
{
printf("\n not a palindrome");
}
else
{
printf("\n it is a palindrome");
}
return 0;
}
