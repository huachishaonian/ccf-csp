#include<stdio.h>
int main()
{
  int n,k,t=0,s=1;
  scanf("%d%d",&n,&k);

  struct people
  {
    int key;
    int value;
  }a[n];
  for(int i=0;i<n;i++)
  a[i].key=i+1;
while(t<n-1)
  {

    for(int i=0;i<n;i++)
    {
      if(a[i].key==0)
      continue;
      else
      {
        a[i].value=s;
        if((a[i].value%k==0)||(a[i].value%10==k))
        {a[i].key=0;
        t++;}
        s++;
        if(t==n-1) break;

      }
    }


  }
  for(int i=0;i<n;i++)
  {
  if(a[i].key!=0)
  printf("%d",a[i].key);
  }
  return 0;
}
