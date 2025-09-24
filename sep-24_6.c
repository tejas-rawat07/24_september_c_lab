#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
    int row_sum;
    int collumn_sum;

     printf("Enter elements of a 3x3 matrix\n");
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix is-\n");
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3;j++) {
            printf("%4d", arr[i][j]);
        }
       
    }

    printf("Sum of each row-\n");
    for (i = 0;i < 3;i++) {
       int row_Sum = 0;
        for (j = 0; j < 3; j++) {
            row_Sum += arr[i][j];
        }
        printf("Row %d = %d\n", i + 1, row_Sum);
    }

    printf("\nSum of each column:\n");
    for (j = 0; j < 3; j++) {
       int collumn_Sum = 0;
        for (i = 0; i < 3; i++) {
            collumn_Sum += arr[i][j];
        }
        printf("Column %d = %d\n", j + 1, collumn_Sum);
    }

    return 0;
}