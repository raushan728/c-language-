#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows, cols;
    printf("Enter size of rows and column :");
    scanf("%d%d", &rows, &cols);
    int *a = (int *)malloc(rows * cols * sizeof(int));
    int *b = (int *)malloc(rows * cols * sizeof(int));
    int *c = (int *)malloc(rows * cols * sizeof(int));
    printf("Enter elemets of matrix 1 :");
    for (int i = 0; i < rows * cols; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of matrix 2 :");
    for (int i = 0; i < rows * cols; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < rows * cols; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Resultant Matrix C (A + B):\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", c[i * cols + j]);
        }
        printf("\n");
    }
    free(a);
    free(b);
    free(c);
}