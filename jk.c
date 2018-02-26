#include<stdio.h>
int main()
{
char a[50];
int k,i;
printf("enter the string:");
scanf("%s",a);
printf("\n enter upto which number the string has to be printed:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("%c",a[i]);
}
return 0;
}
