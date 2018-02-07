#include<stdio.h>
int main()
{
char para[50],count=0,i;
printf("enter the paragraph\n");
scanf("%s",&para);
while(para[i]!='\0')
{
    if(para[i]=='.')
    {
        i++;
count++;
}
}
printf("the noOf lines in the paragraph is %d",count);
return 0;
}
