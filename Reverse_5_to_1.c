#include<stdio.h>
void fun(int m)
{
    if(m==6)
    return;
    fun(m+1);
    printf("%d\n",m);
}
int main()
{
    fun(1);
}