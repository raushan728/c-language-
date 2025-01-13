#include <stdio.h>

int main() {
    int rows, cols, i, j, isDiagonal = 1;
    printf("Enter number of rows, columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of matrix\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Elements at position [%d],[%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i != j && matrix[i][j] != 0) {
                isDiagonal = 0;
                break;
            }
        }
    }
    if (isDiagonal) {
        printf("Matrix is diagonal\n");
    } else {
        printf("Matrix is not diagonal\n");
    }
    return 0;
}
