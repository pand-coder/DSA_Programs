#include<stdio.h>
int main()
{
    int n,B[100];
    printf("Enter n:");
    scanf("%d",&n);
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
    int i=0;
    while(n>0)
    {
        B[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",B[j]);
    }
    }
    return 0;
}
