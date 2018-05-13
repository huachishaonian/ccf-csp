#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
  int num=0,count=0,t=0;
  for(int i=0;i<n;i++)
  {  if(a[i]!=num)
    { t=0;
      for(int j=i;j<n;j++)
      {
        if(a[i]==a[j])
        {
          t++;
        }
      }
      if(t>count)
      {
        count=t;
        num=a[i];
      }
      else if(t==count)
      {num=a[i]<num?a[i]:num;}


    }

  }
  printf("%d",num);
  return 0;
}
