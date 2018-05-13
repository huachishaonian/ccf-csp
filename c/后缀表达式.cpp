#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Myatoi.c"
extern int myatoi(const char *str);
#define M 100

//c语言中实现bool类型
/*typedef enum BOOLEAN
    {false,
     true
    }bool;
*/
typedef struct node
{
    char c;
    struct node *next;
}Node;

typedef struct st_{
    int *data;
    int top;
}St;

//创建头节点
Node *create(){
    Node *head=(Node *)malloc(sizeof(Node));
    head->c='\0';
    head->next=NULL;
    return head;
}
//入栈
void push(Node *top,const char ch){
    Node *new_node=(Node*)malloc(sizeof(Node));
    new_node->c=ch;
    new_node->next=top->next;
    top->next=new_node;
}
//出栈
bool pop(Node *top,char *ch){

    Node *tmp_nod=NULL;
    if (top->next!=NULL)
    {
        tmp_nod=top->next;
        top->next=tmp_nod->next;
        *ch=tmp_nod->c;
        free(tmp_nod);
        return true;
    }else{
        return false;
    }
}
//将栈中的后缀表达式翻转
void reverse(char *postfix){
    int i,j;
    char ch;
    for(i=0,j=strlen(postfix)-1;i<j;i++,j--){
        ch=*(postfix+i);
        *(postfix+i)=*(postfix+j);
        *(postfix+j)=ch;
    }
}
//从读取栈中读取后缀表达式,注意表达式是后进先出，所以要翻转；
char* get_str(Node *ex){
    char *postfix;
    char ch;
    postfix=(char*)malloc(sizeof(char)*M);
    int i=0;
    while (pop(ex,&ch))
    {
        *(postfix+i++)=ch;
    }
    *(postfix+i)='\0';
    free(ex);
    reverse(postfix);
    return postfix;
}
//转换中缀表达式为后缀表达式，并且压入栈中
char *in_post(char *infix){
    Node *ex,*op;
    ex=create();
    op=create();
    char ch;
    while (*infix)
    {
        if(isdigit(*infix) || '.'==*infix)
            push(ex,*infix);
        else if('('==*infix)
            push(op,*infix);
        else if (')'==*infix){
                while (pop(op,&ch) && '('!=ch)
                {
                    push(ex,' ');
                    push(ex,ch);
                }
        }
        else{
            if('*'==*infix || '/'==*infix){
                push(ex,' ');
                push(op,*infix);
            }
            else{
                while(pop(op,&ch)){  //异常处
                    if('('!=ch){
                        push(ex,' ');
                        push(ex,ch);
                    }
                    else{
                        push(op,ch);
                        break;
                    }
                }
                push(ex,' ');
                push(op,*infix);
            }
        }
        infix++;
    }
    while(pop(op,&ch)){
        push(ex,' ');
        push(ex,ch);
    }
    free(op);
    return get_str(ex);
}

double calculator(char *postfix){
    St st;
    int m=strlen(postfix);
    st.data=(int *)malloc(sizeof(int)*m);
    int t=0;
    st.top=-1;
    char ch;
    int result;
    while(ch=*(postfix+t)){
        switch(ch){
        case '+':
            st.data[st.top-1]=st.data[st.top-1]+st.data[st.top];
            st.top--;
            break;
        case '-':
            st.data[st.top-1]=st.data[st.top-1]-st.data[st.top];
            st.top--;
            break;
        case '*':
            st.data[st.top-1]=st.data[st.top-1]*st.data[st.top];
            st.top--;
            break;
        case '/':
            if(!st.data[st.top]){
                printf("error...\n");
                exit(1);
            }
            st.data[st.top-1]=st.data[st.top-1]/st.data[st.top];
            st.top--;
            break;
        case ' ':
            break;
        default:
            if(isdigit(ch)){
                st.data[++st.top]=myatoi(&ch);
            }
        }
        t++;
    }
    result=st.data[st.top];
    free(st.data);
    return result;
}
int main(int argc,char *argv[]){
    char *infix,*postfix;
    infix=(char *)malloc(sizeof(char)*M);
    gets(infix);
    postfix=in_post(infix);
    printf("后缀表达式:\n%s\n",postfix);
    int result;
    result=calculator(postfix);
    printf("%s=%d\n",infix,result);
    return 0;
}
