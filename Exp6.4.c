#include <stdio.h>
int main() {
    int m, n, p, q, i, j, k;
    printf("Enter order of matrix A (m n): ");
    scanf("%d%d", &m, &n);
    printf("Enter order of matrix B (p q): ");
    scanf("%d%d", &p, &q);
    if(n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &B[i][j]);
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    printf("Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("Product Matrix (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
