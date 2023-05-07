#include<stdio.h>
void fun(int B[], int m, int j)
{
    if(j==m)
    return;
    printf("%d ",B[j]);
    fun(B,m,j+1);
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    fun(A,n,0);
}