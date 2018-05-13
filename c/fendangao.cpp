#include<stdio.h>
int a[1000];
int main()
{
  int n,k,sum=0,t=0;
  scanf("%d %d",&n,&k);

  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(int j=0;j<n;j++)
  {
    sum+=a[j];
    if(sum>=k)
    {
      t++;
      sum=0;
      continue;
    }
  }
  if(sum!=0)
  {
    printf("%d",t+1);
  }
  else if(sum==0)
  {
    printf("%d",t);
  }
  return 0;
}
