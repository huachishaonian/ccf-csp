#include<stdio.h>
int main()
{
  int t,k;
  scanf("%d",&t);
  int a[t];
  int b[t-1];
  for(int i=0;i<t;i++)
  scanf("%d",&a[i]);
  for(int i=1;i<t;i++)
  for(int j=0;j<t-i;j++)
  if(a[j]<a[j+1])
  { k=a[j];
    a[j]=a[j+1];
    a[j+1]=k;
  }
  for(int i=0;i<t-1;i++)
  b[i]=a[i]-a[i+1];
  for(int i=1;i<t-1;i++)
  for(int j=0;j<t-2;j++)
  if(b[j]>b[j+1])
  { k=b[j];
    b[j]=b[j+1];
    b[j+1]=k;
  }
  printf("%d",b[0]);
  return 0;
}
