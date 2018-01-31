#include<stdio.h>
#include<string.h>
int main()
{
int len,i;
const char *str;
printf("enter the string:");
scanf("%s",str);
len=strlen(str);
for(i=0;i<len;i++)
{
if((*str>=48)&&(*str<=57))
printf("\n it is numeric");
else
printf("\n it is not numeric");
}
return 0;
}
