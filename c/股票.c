#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],i,j,b,num=0;
  for( i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(j=0;j<n-1;j++)
  {b=0;
   b=abs(a[j]-a[j+1]);
   if(num<b)
   {
     num=b;
   }

 }printf("%d\n",num);
 return 0;
}
