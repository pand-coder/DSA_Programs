#include<stdio.h>
int main()
{
    int matrix[3][3];
    for(int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d",&matrix[i][j]);
        }
        
        
    }
    int a = matrix[0][0], b = matrix[0][1], c = matrix[0][2];
    int d = matrix[1][0], e = matrix[1][1], f = matrix[1][2];
    int g = matrix[2][0], h = matrix[2][1], i = matrix[2][2];
    
    int det=0;
    det=a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    
    printf("%d",det);
   
   return 0; 
}

DET OF 3X3 Matrix
