#include<iostream>
#include<stdlib.h>
#include<string.h> 
void push();
void pop();
void size();
void empty();
void top();
int stacksize=0;
int n;
int stack[100001]; 
int head=-1; 
int main()
{
    char a[30];
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%s", a);
        if (strcmp(a, "push")==0)
        {
            push();
        }
        if (strcmp(a, "pop")==0)
        {
            pop();
        }
        if (strcmp(a, "size")==0)
        {
            size();
        }
        if (strcmp(a, "empty")==0)
        {
            empty();
        }
        if (strcmp(a, "top")==0)
        {
            top();
        }
    }
    return 0;
}
void push()
{
    int var; 
    scanf("%d", &var);
    stack[++head]=var; 
    stacksize++;
}
void pop()
{
    if (stacksize==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", stack[head]);
        stack[--head];
        stacksize--; 
    }
}
void size()
{
    printf("%d\n", stacksize);
}
void empty()
{
    if (stacksize==0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
void top()
{
    if (stacksize==0)
    {
        printf("-1\n");
    }
    else
    {
       printf("%d\n", stack[head]);
    }
}
