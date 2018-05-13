#include<stdio.h>
int main()
{
  int t,s=0;
  scanf("%d",&t);
  for(int i=0;i<100000 ;i+=100)
  {  s=i;
    if(s<=3500)
    { if(s==t)
     {printf("%d",s);
      break;
     }
    }
    if(s>3500&&s<=5000)
    {
      int s1=s-(s-3500)*0.03;
      if(s1==t)
      {printf("%d",s);break;
      }
    }
    if(s>5000&&s<=8000)
    {
      int s1=s-((s-5000)*0.1+45);
      if(s1==t)
      {printf("%d",s);break;}

    }
    if(s>8000&&s<=12500)
    {
      int s1=s-((s-8000)*0.2+345);
      if(s1==t)
      {printf("%d",s);break;}

    }
    if(s>12500&&s<=38500)
    {
      int s1=s-((s-12500)*0.25+1245);
      if(s1==t)
      {printf("%d",s);break;}
    }
    if(s>38500&&s<=58500)
    {
      int s1=s-((s-38500)*0.3+7745);
      if(s1==t)
      {printf("%d",s);break;}
    }
    if(s>58500&&s<=803500)
    {
      int s1=s-((s-58500)*0.35+13745);
      if(s1==t)
      {printf("%d",s);break;}
    }
    if(s>803500)
    {
      int s1=s-((s-803500)*0.45+13745);
      if(s1==t)
      {printf("%s",s);break;}
    }

  }
  return 0;
}
