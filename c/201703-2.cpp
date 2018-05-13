#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    a[i]=i+1;
  }
  int m;
  scanf("%d",&m);
  while(m--)
  {
    int p,q;
    scanf("%d%d",&p,&q);
    if(q>0)
    {
      int t;
      for(int i=0;i<n;i++)
      {
        if(a[i]==p)
        {
          t=i;
        }
      }

      for(int i=t;i<t+q;i++)
      {
        a[i]=a[i+1];
      }
      a[t+q]=p;

    }
    else if(q<0)
    {
      int t;
      for(int i=0;i<n;i++)
      {
        if(a[i]==p)
        {
          t=i;
        }
      }
      for(int i=t;i>t+q;i--)
      {
        a[i]=a[i-1];
      }
      a[t+q]=p;
    }



  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
