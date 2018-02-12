#include<stdio.h>
#include<string.h>
int main()
{
char a[50],b[50];
int len1,len2;
printf("enter the strings:");
scanf("%s%s",a,b);
len1=strlen(a);
len2=strlen(b);
if(len1>len2)
{
printf("\n %s",a);
}
else
{
printf("\n %s",b);
}
return 0;
}
