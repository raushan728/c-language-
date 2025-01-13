#include <stdio.h>
int main()
{
    int rows, cols;
    printf("enter number of rows");
    scanf("%d", &rows);
    printf("enter number of columns");
    scanf("%d", &cols);
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], i, j;
    // input for matrix1
    printf("enter elements of matrix1\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("elements at position [%d],[%d]", i + 1, j + 1);

            scanf("%d", &matrix1[i][j]);
        }
    }
    // input for matrix2
    printf("enter elements of matrix2\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("elements at position [%d],[%d]", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    // addition of matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // output of sum matrix
    printf("sum of matrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", sum[i] [j]);
        
        }
        printf("\n");
    }
}