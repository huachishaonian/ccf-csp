#include<stdio.h>
int main()
{
  int n;
  int a[1001];
  for(int i=0;i<1001;i++)
  {
    a[i]=0;
  }
  scanf("%d",&n);
  while(n--)
  {
    int t;
    scanf("%d",&t);
    for(int i=0;i<1001;i++)
    {
      if(t==i)
      {
        a[i]++;
      }
    }
  }

  for(int i=1001;i>0;i--)
  {
    for(int j=0;j<1001;j++)
    {
      if(a[j]==i)
      {
        printf("%d %d\n",j,i);
      }
    }
  }
return 0;

}
