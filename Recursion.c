#include<stdio.h>
void fun()
{
    printf("Nothing\n");
     fun();
}
int main()
{
    fun();
    return 0;
}