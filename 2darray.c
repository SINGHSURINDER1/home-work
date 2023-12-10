#include <stdio.h>

int main() {
    int arr[100][100], rows, columns, i, j;

    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
