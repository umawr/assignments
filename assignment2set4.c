#include <stdio.h>
#include <stdlib.h>

// 1. Write a program to check if a matrix is orthogonal or not.

int transpose(int order, int matrix[order][order]);
int ortho(int order, int matrix[order][order], int transpose[order][order]);
int main(void)
{
    int order;
    printf("Enter order of sqaure matrix\n");
    scanf("%d", &order);
    int matrix[order][order];
    for (int i = 0; i < order; i++)
        for(int j = 0; j < order; j++)
        {
            printf("Enter m(%d %d)th element\t", i, j);
            scanf("%d", &matrix[i][j]);
        }
    printf("\nMatrix is\n\n");
    for (int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
            printf("%3d", matrix[i][j]);
        printf("\n");
    }
    transpose(order, matrix);
}
int transpose(int order, int matrix[order][order])
{
    int transpose[order][order];
    printf("\nTranspose of matrix is\n\n");
    for (int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
        {
            transpose[i][j] = matrix[j][i];
            printf("%3d", transpose[i][j]);
        }
        printf("\n");
    }
    ortho(order, matrix, transpose);
}
int ortho(int order, int matrix[order][order], int transpose[order][order])
{
    int count = 0;
    int identity[order][order];
    for (int i = 0; i < order; i++)
        for (int j = 0; j < order; j++)
            identity[i][j] = 0;
    printf("\nProduct of Matrix and its Transpose is\n\n");
    for (int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
        {
            for(int k = 0; k < order; k++)
                identity[i][j] = identity[i][j] + matrix[i][k] * transpose[k][j];
            printf("%4d", identity[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < order; i++)
        if (identity[i][i] == 1)
            count++;
    if (count == order)
        printf("\nMatrix is an identity\n");
    else 
        printf("\nMatrix is NOT an identity\n");

}
