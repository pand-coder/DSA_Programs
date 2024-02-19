#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the number of rows:");
    scanf("%d",&i);
    printf("Enter the number of columns:");
    scanf("%d",&j);
    if(i<=0||j<=0)
    {
        return 0;
    }
    else
    {
    int matrix[i][j];
    printf("Matrix Input");
    for(int x=0;x<i;x++)
    {
      for(int y=0;y<j;y++)  
      {
        scanf("%d",&matrix[x][y]);
      }
    }
    printf("Matrix output\n");
    for(int x=0;x<i;x++)
    {
      for(int y=0;y<j;y++)  
      {
        printf("%d",matrix[x][y]);
      }
    }
    }
    return 0;
}
