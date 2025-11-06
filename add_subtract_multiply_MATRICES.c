#include <stdio.h>

#define MAX 10

void getMatrixElements(int matrix[][MAX], int rows, int cols) {
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[][MAX], int B[][MAX], int C[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[][MAX], int B[][MAX], int C[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[][MAX], int B[][MAX], int C[][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r1, c1, r2, c2;
    int choice;

    printf("Select an operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        printf("Enter number of rows and columns: ");
        scanf("%d %d", &r1, &c1);

        printf("\nEnter Matrix A:\n");
        getMatrixElements(A, r1, c1);

        printf("\nEnter Matrix B:\n");
        getMatrixElements(B, r1, c1);

        if (choice == 1) {
            addMatrices(A, B, C, r1, c1);
            printf("\nResult (A + B):\n");
        } else {
            subtractMatrices(A, B, C, r1, c1);
            printf("\nResult (A - B):\n");
        }
        printMatrix(C, r1, c1);

    } else if (choice == 3) {
        printf("Enter rows and columns for Matrix A: ");
        scanf("%d %d", &r1, &c1);
        
        printf("Enter rows and columns for Matrix B: ");
        scanf("%d %d", &r2, &c2);

        if (c1 != r2) {
            printf("\nError: Columns of A (%d) must equal rows of B (%d).\n", c1, r2);
            return 1; // Exit with an error
        }

        printf("\nEnter Matrix A:\n");
        getMatrixElements(A, r1, c1);

        printf("\nEnter Matrix B:\n");
        getMatrixElements(B, r2, c2);

        multiplyMatrices(A, B, C, r1, c1, c2);

        printf("\nResult (A * B):\n");
        printMatrix(C, r1, c2);

    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}