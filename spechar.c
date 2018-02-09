#include<stdio.h>
int main()
{
char ch[100];
int i,c2=0;
printf("enter the string:");
scanf("%s",ch);
for(i=0;ch[i]!='\0';i++)
{

if(((ch[i]>=32)&&(ch[i]<=47))||((ch[i]>=58)&&(ch[i]<=64)))
{
c2++;
}

}
printf("\n the special characters are %d",c2);
return 0;
}
