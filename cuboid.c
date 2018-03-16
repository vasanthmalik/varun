#include<stdio.h>
int main()
{
int a,b,c,sa,vol;
printf("enter the length,width and height of cuboid:");
scanf("%d%d%d",&a,&b,&c);
sa=a*b*c;
vol=(2*a*b)+(2*b*c)+(2*c*a);
printf("\n the surface area and volume are %d and %d",sa,vol);
return 0;
}
