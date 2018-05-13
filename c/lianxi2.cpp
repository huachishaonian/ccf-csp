#include<stdio.h>
#include<math.h>
int main()
{ int a,b;
  for(int i=-99;i<10000;i++)
  {
    a=sqrt(i+100);
    b=sqrt(i+100+168);
    if(a*a==(i+100)&&b*b==(i+100+168))
    printf("%d\n",i);
  }
  return 0;
}
