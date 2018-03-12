#include<stdio.h>
#include<string.h>
int main()
{
char s[30];
int i,len;
printf("enter the string");
scanf("%s",s);
len=strlen(s);
s[len/2]='*';
printf("%s",s);
return 0;
}
