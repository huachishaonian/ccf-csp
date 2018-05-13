#include<stdio.h>
int main()
{
  int n,sum=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(int j=1;j<n-1;j++)
  {
    int x=a[j-1]-a[j];
    int y=a[j]-a[j+1];
    int z=x*y;
    if(z<0)
    {
      sum++;
    }
  }printf("%d\n",sum);
  return 0;
}
