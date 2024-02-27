#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,r1,c1,r2,c2;
    printf("Enter the number of rows for matrix 1:");
    scanf("%d",&r1);
    printf("Enter the number of columns for matrix 1:");
    scanf("%d",&c1);

    printf("Enter the number of rows for matrix 2:");
    scanf("%d",&r2);
    printf("Enter the number of columns for matrix 2:");
    scanf("%d",&c2);

    if(c1 != r2)
    {
        printf("Matrices cannot be multiplied\n");
        return 0;
    }

    int arr1[r1][c1];
    int arr2[r2][c2];
    int result[r1][c2];

    printf("Enter the elements of Matrix 1:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of Matrix 2:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Matrix 1:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Resultant Matrix (Multiplication of Matrix 1 and Matrix 2):\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            result[i][j] = 0;
            for(int k=0; k<c1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
