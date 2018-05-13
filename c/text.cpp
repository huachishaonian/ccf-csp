#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,j,sum=0;
  scanf("%d",&n);
  int a[n];
  for( i=0;i<n;i++)
  scanf("%d",&a[i]);
  for( i=0;i<n;i++)
  { int t=0,k=0;
    for( j=0;j<n;j++)
    {
if(i==j) continue;
      if(a[i]<a[j])
      {
        t++;
      }
      else if(a[i]>a[j])
      {
        k++;
      }

  }

    if(t==k)
    {
      sum=a[i];
      break;
    }
    else
    {
      sum=0;
    }
}
if(sum!=0)
{
  printf("%d",sum);
}
if(sum==0)
{
  printf("-1");
}


  return 0;
}
