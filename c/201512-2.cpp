#include<stdio.h>
int main()
{
  int m,n;
  scanf("%d%d",&m,&n);
  int i,j;
  int a[m][n];
  int b[m][n];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      b[i][j]=1;
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(j+2<n&&a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2])
      {
        b[i][j]=0;
        b[i][j+1]=0;
        b[i][j+2]=0;
      }
      if(i+2<m&&a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j])
      {
        b[i][j]=0;
        b[i+1][j]=0;
        b[i+2][j]=0;
      }
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(b[i][j]==0)
      a[i][j]=0;
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
