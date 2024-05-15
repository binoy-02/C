#include <stdio.h>
int i,j,k;
// Function to input a matrix
void inputMatrix(int matrix[20][20], int rows, int cols) 
{
	int i,j;
    for (i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            printf("Enter the element at row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

//display a matrix
void displayMatrix(int matrix[20][20], int rows, int cols) 
{
	int i,j;
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

//add two matrices
void addMatrices(int result[20][20], int matrix1[20][20], int matrix2[20][20], int rows, int cols) 
{
	

int i,j;
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}




//subtract two matrices
void subtractMatrices(int result[20][20], int matrix1[20][20], int matrix2[20][20], int rows, int cols) {
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

//multiply two matrices
void multiplyMatrices(int result[20][20], int matrix1[20][20], int rows1, int cols1, int matrix2[20][20], int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

//transpose of a matrix
void transposeMatrix(int result[20][20], int matrix[20][20], int rows, int cols) {
   
 for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}

//determinant of square matrix
int determinant(int a[20][20], int row) {
    int det = 0;
    if (row == 2) {
        det = a[0][0] * a[1][1] - a[1][0] * a[0][1];
    } else if (row == 3) {
        det = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) -
              a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) +
              a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    } else {
        printf("\nDeterminant is not possible.\n");
    }
    return det;
}



int main() 
{
    int rows1, cols1, rows2, cols2;
    int Array1[20][20];
    int Array2[20][20];
    int result[20][20];

    printf("Enter the number of rows and columns for Array1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for Array2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements for Array1:\n");
    inputMatrix(Array1, rows1, cols1);

    printf("Enter elements for Array2:\n");
    inputMatrix(Array2, rows2, cols2);

   

     printf("\nArray1:\n");
    displayMatrix(Array1, rows1, cols1);

    printf("\nArray2:\n");
    displayMatrix(Array2, rows2, cols2);

    printf("\nResult of Addition:\n");
    addMatrices(result, Array1, Array2, rows1, cols1);
    displayMatrix(result, rows1, cols1);

    printf("\nResult of Subtraction:\n");
    subtractMatrices(result, Array1, Array2, rows1, cols1);
    displayMatrix(result, rows1, cols1);

    printf("\nResult of Multiplication:\n");
    multiplyMatrices(result, Array1, rows1, cols1, Array2, rows2, cols2);
    displayMatrix(result, rows1, cols2);

    if (rows1 == cols1) 
	{
        int det = determinant(Array1, rows1);
        printf("\nDeterminant of Array1: %d\n", det);
    } 
	else 
	{
        printf("\nDeterminant calculation is only supported for square matrices.\n");
    }

    printf("\nTranspose of Array1:\n");
    transposeMatrix(result, Array1, rows1, cols1);
    displayMatrix(result, cols1, rows1);

    return 0;
}
