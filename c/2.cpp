#include<stdio.h>
int main()
{ int n,a,b,c;
scanf("%d",&n);
a=n/10;
b=a/5;
c=a%5;
if(a<3)
{
  printf("%d",a);
}
if((a==3)||(a==4))
{
  printf("%d",a+1);
}
if(a>=5)
{
  if(c>=3)
  {
    printf("%d",a+2*b+1);
  }
  else
  {
    printf("%d",a+2*b);
  }
}return 0;
}
