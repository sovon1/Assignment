#include<stdio.h>

int main() {
    int a, b, row, col, i, j, sum;
    sum = 0;
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &col);
    int arr[row][col];
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The array is: \n");
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (i + j == row - 1) {
                sum += arr[i][j];
            }
        }
    }
    
    printf("minor diagonal is: ");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (i + j == row - 1) {
                printf("%d", arr[i][j]);
                if (i != row - 1) {
                    printf("+");
                }
                sum += arr[i][j];
            }
        }
    }
    printf("=%d", sum);

    return 0;
}
