#include<stdio.h>
int main()
{
  int n,sum=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int b[n];
  struct number
  {
    int id;
    int num;
  }c[n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    { if(a[i]<0)
      {
        break;
      }
      if(a[j]==a[i]&&a[i]>0)
      {
        sum++;
      }
      c[i].id=a[i];
      c[i].num=sum;
      a[i]=-1;
      sum=0;
    }

  }
  for(int i=0;i<n;i++)
  {
    printf("%d%d",c[i].id,c[i].num);
  }
  return 0;
}
