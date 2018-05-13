#include<stdio.h>
int main()
{
  int n,sum=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(int j=0;j<n;j++)
  {
    if(a[j]!=a[j+1])
    {
      sum++;
    }

  }printf("%d\n",sum);
  return 0;
}
