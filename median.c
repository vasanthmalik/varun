#include<stdio.h>
int main()
{
int size,array[size],middle,i;
printf("enter the size of an array:");
scanf("%d",&size);
printf("\nenter the array values:");
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
middle=size/2;
printf("the median is %d",array[middle]);


return 0;
}
