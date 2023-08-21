#include <stdio.h>

void inputMatrix(int matrix[][10], int rows, int columns, const char *name) {
    printf("\n-------------Matrix: %s-------------\n\n", name);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int rows1, int cols1, int rows2, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d.\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns of Matrix 1 must be equal to the number of rows of Matrix 2.\n");
        return 1;
    }

    inputMatrix(matrix1, rows1, cols1, "1");
    inputMatrix(matrix2, rows2, cols2, "2");

    multiplyMatrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);

    printf("\nResult: Multiplication Matrix\n\n");
    displayMatrix(result, rows1, cols2);

    return 0;
}
