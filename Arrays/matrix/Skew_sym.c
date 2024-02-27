#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the number of rows\n");
    scanf("%d", &r);
    printf("Enter the number of columns\n");
    scanf("%d", &c);

    if (r != c)
    {
        printf("Not a square matrix\n");
        return 0;
    }

    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int skewsym = 1; // Declare skewsym here
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] != -matrix[j][i])
                {
                    skewsym = 0;
                    break;
                }
            }
            if (!skewsym)
            {
                break;
            }
        }
    }

    if (skewsym)
    {
        printf("Skew Symmetric\n");
    }
    else
    {
        printf("Not skew symmetric\n");
    }
    return 0;
}
