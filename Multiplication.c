#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n); // A = m x n

    printf("Enter columns of Matrix B: ");
    scanf("%d", &p); // B = n x p

    // Allocate memory for matrices
    int *A = (int *)malloc(m * n * sizeof(int));
    int *B = (int *)malloc(n * p * sizeof(int));
    int *C = (int *)malloc(m * p * sizeof(int));

    if (A == NULL || B == NULL || C == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input for Matrix A
    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m * n; i++) {
        scanf("%d", &A[i]);
    }

    // Input for Matrix B
    printf("Enter elements of Matrix B (%d x %d):\n", n, p);
    for (int i = 0; i < n * p; i++) {
        scanf("%d", &B[i]);
    }

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i * p + j] = 0;
            for (int k = 0; k < n; k++) {
                C[i * p + j] += A[i * n + k] * B[k * p + j];
            }
        }
    }

    // Print Result Matrix
    printf("Resultant Matrix C (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i * p + j]);
        }
        printf("\n");
    }

    // Free memory
    free(A);
    free(B);
    free(C);

    return 0;
}
