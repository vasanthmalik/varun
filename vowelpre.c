#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int flag,i;
printf("enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
{
flag=1;
}
}
if(flag==1)
{
printf("\n it has vowel");
}
else
{
printf("\n it has no vowel");
}
return 0;
}
