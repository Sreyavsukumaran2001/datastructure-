#include<stdio.h>
void main()
{
int a,b,c;
int max3(int,int,int);
printf("Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
printf("Largest in %d",max3(a,b,c));
}
int max3(int x,int y, int z)
{
int max;
if(x>y)
max=x;
else 
max=y;
if(z>max)max=z;
return max;
}

