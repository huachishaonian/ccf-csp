#include<stdio.h>
int main()
{
  int n,k,sum=0;
  scanf("%d%d",&n,&k);
  int b[n];
  for(int i=0;i<n;i++)
  b[i]=i+1;

  struct teacher
  {
    int num;
    int start;
    int end;
  }a[k];

  int x,y,z;
  for(int i=0;i<k;i++)
  {
  scanf("%d%d%d",&x,&y,&z);
  a[i].num=x;
  a[i].start=y;
  a[i].end=z+y;
  }

  for(int i=0;i<k;i++)
  {
    for(int j=0;j<k-i-1;j++)
    {
      if(a[j].num>a[j+1].num)
      {
         int s=a[j].num;
        a[j].num=a[j+1].num;
        a[j+1].num=s;
        int t=a[j].start;
       a[j].start=a[j+1].start;
       a[j+1].start=t;
       int p=a[j].end;
      a[j].end=a[j+1].end;
      a[j+1].end=p;
      }
    }
  }
  int t=1;
  while(t++)
  {
    for(int i=0;i<k;i++)
    {  if(a[i].end==t)
      {
        for(int j=0;j<n;j++)
        {
          if(b[j]==0)
          {b[j]=a[i].num;
            sum++;
            break;
          }
        }
      }
      if(a[i].start==t)
      {
        for(int j=0;j<n;j++)
        {
          if(a[i].num==b[j])
          b[j]=0;


        }
      }




    }
    if(sum==k)
    break;




  }
  for(int i=0;i<n;i++)
  printf("%d ",b[i]);
  return 0;

}
