#include<stdio.h>
int main()
{

  int n,t,count=0;
  scanf("%d",&n);
  while(n)
  {
    t=n%10;
    count+=t;
    n=n/10;
  }
  printf("%d",count);
  return 0;
}
