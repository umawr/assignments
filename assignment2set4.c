#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
            printf("Enter the (%d, %d)th element\t", i + 1, j + 1);
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
    printf("\nTranspose of Matrix is\n\n");
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
        printf("\nMatrix is an identity\n\n");
    else 
        printf("\nMatrix is NOT an identity\n");

}

// 2. Write a program to check if a number is automorphic or not

void automorphic(int input);

int main()
{
  int input;
  printf("Enter a number\n");
  scanf("%d", &input);
  automorphic(input);
  return 0;
}

void automorphic(int input)
{
  int count = (input == 0) ? 1 : (int)log10(input) + 1; 
  if ((int)pow(input, 2) % (int)pow(10, count) == input)
    printf("%d is automorphic\n", input);
  else
    printf("%d is not automorphic\n", input);
  return;
}

// 3. Sort array of elements in descending order

void sort(int length, int array[length]);

int main(void)
{
  int length;
  printf("Enter length of the array\n");
  scanf("%d", &length);
  int array[length];
  for(int i = 0; i < length; i++)
  {
   printf("Enter elements no. %d\n", i + 1);
   scanf("%d", &array[i]);
  }
  sort(length, array);
}

void sort(int length, int array[length])
{
  for(int i = 1; i < length; i++)
  {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > key)
    {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
  printf("\nElements of the sorted array are\n");
  for (int i = (length - 1); i >= 0; i--)
    printf("Elements no. %d is %d\n", i + 1, array[i]);
  return; 
}

// 4. C program to count number of digits in a number via recursions

int count(int n) {
    if (n == 0) return 0;
    return 1 + count(n / 10);
}

int main() {
    int n;
    printf("Input a number : ");
    scanf("%d", &n);   
    int ans = (n == 0) ? 1 : count(n);
    printf("The number of digits in the number is : %d\n", ans);
    return 0;
}
