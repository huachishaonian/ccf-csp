#include<stdio.h>
#include<math.h>
#define max 100
char ex[max];
void trans(){
       char str[max];
       char stack[max];
       char ch;
       int sum,i,j,t,top=0;

       printf("输入一个求值的表达式，以#结束。\n");

       printf("算数表达式：\n");
       i=0;
       do{
              i++;
              scanf("%c",&str[i]);
       }while(str[i]!='#' && i!=max);
    sum=i;
       t=1;i=1;
       ch=str[i];i++;
       while(ch!='#'){
              switch(ch){
              case '(':
                     top++;stack[top]=ch;
                          break;
        case ')':
                     while(stack[top]!='('){
                ex[t]=stack[top];top--;t++;
                     }
                     top--;
                     break;
        case '+':
              case '-':
                     while(top!=0&&stack[top]!='('){
                            ex[t]=stack[top];top--;t++;
                     }
                     top++;stack[top]=ch;
                     break;
              case '*':
        case '/':
                     while(stack[top]=='*'||stack[top]=='/'){
                            ex[t]=stack[top];top--;t++;
                     }
                     top++;stack[top]=ch;
                     break;
              case ' ':break;
              default:while(ch>='0'&&ch<='9'){
                     ex[t]=ch;t++;
                     ch=str[i];i++;
                            }
                     i--;
                     ex[t]='#';t++;
              }
              ch=str[i];i++;
       }
       while(top!=0){
              ex[t]=stack[top];t++;top--;
       }
       ex[t]='#';
       printf("\n\t原来表达式：");
       for(j=1;j<sum;j++)
              printf("%c",str[j]);
    printf("\n\t后缀表达式：");
       for(j=1;j<t;j++)
              printf("%c",ex[j]);
}
void compvalue(){
       float stack[max],d;
       char ch;
       int t=1,top=0;
       ch=ex[t];t++;
    while(ch!='#'){
              switch(ch){
                case '+':
                       stack[top-1]=stack[top-1]+stack[top];
                       top--;
                       break;
          case '-':
                       stack[top-1]=stack[top-1]-stack[top];
                       top--;
                       break;
          case '*':
                       stack[top-1]=stack[top-1]*stack[top];
                       top--;
                       break;

          case '/':
                 if(stack[top]!=0)
                         stack[top-1]=stack[top-1]/stack[top];
                 else{
                        printf("\n\t除零错误!\n");
                        exit(0);
                       }
                       top--;
                       break;
                default:
                       d=0;
                       while(ch>='0'&&ch<='9'){
                              d=10*d+ch-'0';
                              ch=ex[t];t++;
                       }
                       top++;
                       stack[top]=d;
              }
              ch=ex[t];t++;
       }
       printf("\n\t计算结果:%g\n",stack[top]);
}

int main(){
       trans();
       compvalue();
     }
