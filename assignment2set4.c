#include <stdio.h>
#include <stdlib.h>
int transpose(int order, int m[order][order]);
int ortho(int order, int m[order][order], int t[order][order])
int main(void)
{
    int order;
    printf("Enter order of sqaure matrix\n");
    scanf("%d", &order);
    int m[order][order];
    for (int i = 0; i < order; i++)
        for(int j = 0; j < order; j++)
        {
            printf("Enter m(%d %d)th element\t", i, j);
            scanf("%d", &m[i][j]);
        }
    printf("\nMatrix m is\n");
    for (int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
            printf("%3d", m[i][j]);
        printf("\n");
    }
    transpose(order, m);
}
int transpose(int order, int m[order][order])
{
    int t[order][order];
    printf("\nTranspose of matrix m is is\n");
    for (int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
        {
            t[i][j] = m[j][i];
            printf("%3d", t[i][j]);
        }
        printf("\n");
    }
    ortho(order, m, t);
}
int ortho(int order, int m[order][order], int t[order][order])
{
    
}
