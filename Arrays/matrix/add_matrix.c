//Addition of any order of matrices through implementation of 2d arrays //
//Time : 2:04 Am//
//Topic 2d arrays//
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c;
    printf("Enter the number of the rows to be inserted into the matrix:");
    scanf("%d",&r);
    printf("Enter the number of the columns to be inserted into the matrix:");
    scanf("%d",&c);
    int arr1[r][c];
    int arr2[r][c];
    int result[r][c];
    printf("Enter the elements of the Matrix 1: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d \t",&arr1[i][j]);
        }
    }
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d \t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the Matrix 2: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d \t",&arr2[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
        
}
