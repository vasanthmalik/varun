#include<stdio.h>
int main()
{
char a[20],temp;
int i,j;
printf("enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;a[i]!='\0';i++)
{
printf("%c",a[i]);
}
return 0;
}
