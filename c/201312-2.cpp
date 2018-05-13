#include<stdio.h>
int main()
{
  char a[13];
  for(int i=0;i<13;i++){
    scanf("%c",&a[i]);

  }
  int b[13];
  for(int i=0;i<13;i++)
  {
    if(a[i]!='-')
    {
      b[i]=a[i]-'0';
    }

  }
  int sum=b[0]*1+b[2]*2+b[3]*3+b[4]*4+b[6]*5+b[7]*6+b[8]*7+b[9]*8+b[10]*9;
  sum=sum%11;
  if(sum!=10){
    if(sum==b[12])
    printf("Right");
    if(sum!=b[12])
    { a[12]=sum+'0';
      for(int i=0;i<13;i++)
      {
        printf("%c",a[i]);
      }

    }
  }
  if(sum==10)
  {
    if(a[12]=='X')
    printf("Right");
    if(a[12]!='X')
    { a[12]='X';
      for(int i=0;i<13;i++)
      {
        printf("%c",a[i]);
      }

    }
  }
  return 0;



}
