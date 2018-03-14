#include<stdio.h>
int main()
{
char a[20],b[20],c[20];
int i;
printf("enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(i%2==0)
printf("%c",a[i]);
}
printf("\n");
for(i=0;a[i]!='\0';i++)
{
if(i%2!=0)
printf("%c",a[i]);
}
return 0;
}
