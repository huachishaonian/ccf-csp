#include<stdio.h>
int a[1000][1000];
int b[1000][1000];
int main()
{
  int m,n,i,j;
  scanf("%d%d",&m,&n);
  
  for( i=0;i<m;i++)
  for( j=0;j<n;j++)
  scanf("%d",&a[i][j]);
  for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
  b[j][i]=a[i][n-j-1];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    printf("%d ",b[i][j]);

  if(i!=n-1)
  {
    printf("\n");
  }
  }
  return 0;
}
