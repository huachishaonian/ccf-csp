#include<stdio.h>
int main()
{
  int y,d,sum=0,t;
  scanf("%d",&y);
  scanf("%d",&d);
  if((y%4==0&&y%100!=0)||y%400==0){
    int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<12;i++)
    {
      sum+=a[i];
      if(sum>d)
      sum-=a[i];
      t=i+2;
      break;
    }
    printf("%d\n%d",t,d-sum);
  }
  else
  {
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<12;i++)
    {
      sum+=a[i];
      if(sum>d)
      sum-=a[i];
      t=i+2;
      break;
    }
    printf("%d\n%d",t,d-sum);
  }
  }
