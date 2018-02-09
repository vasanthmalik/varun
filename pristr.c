#include<stdio.h>
int main()
{
char str[100];
int k,i;
printf("enter the string:");
scanf("%s",str);
printf("\n enter the noOf times:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%s",str);
}
return 0;
}

