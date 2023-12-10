#include <stdio.h>

int main() {
    int first[10][10], second[10][10], result[10][10];
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2) {
        printf("Error! Enter rows and columns again.\n");
        printf("Enter rows and columns for the first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for the second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
