#include<stdio.h>
int fun(char n[], int i)
{
    if(n[i] == '\0')
    return 0;
    int l=fun(n,i+1);
    return l+1;
}
int main()
{
    char name[100];
    scanf("%s",name);
    int length = fun(name,0);
    printf("%d\n",length);
    return 0;
}