#include <stdio.h>

int main() {
    int A[50][50], B[50][50], C[50][50],m1, n1, m2, n2, i, j, k;
    printf("Enter rows and columns of the first matrix: \n");
    scanf("%d %d", &m1, &n1);

    printf("Enter rows and columns of the second matrix: \n");
    scanf("%d %d", &m2, &n2);

    if (n1 != m2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    printf("Enter elements of the matrix A:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of the matrix B:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            C[i][j] = 0;
        }
    }
    
        printf("\nMatrix A:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    
        printf("\nMatrix B:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            for (k = 0; k < n1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Resultant matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
