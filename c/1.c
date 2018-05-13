#include<stdio.h>
int main()
{ int n,a,b,c;
scanf("%d",&n);
a=n/10;
if(a<3)
{printf("%d",a);}
else if(a>=3 || a<5)
{printf("%d",a+1);}
else if(a>=5)
{
b=a/5;
c=a%5;
printf("%d",b);
printf("%d",c);
if(c>=3)
{printf("%d",a+2*b+1);}
else{printf("%d",a+2*b);}
}
}
