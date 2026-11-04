#include <stdio.h>
#include <stdlib.h>
int ortho(int order, int m[order][order]);
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
    ortho(order, m);
    return 0;
}
int ortho(int order, int m[order][order])
{
    return 0;
}
