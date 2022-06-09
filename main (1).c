/* Problem: Debo is a school student whose favourite subject is Mathematics. Her teacher taught
Matrices and she found it very interesting. Also, she is learning C programming. She
thought of developing a C program to find the transpose of a matrix. She is not much
familiar with nested loops. Help her to complete the code. */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int a[10][10], transpose[10][10], rows, columns;

  printf("Enter rows and columns: ");
  scanf("%d %d", &rows, &columns);

  // asssigning elements to the matrix
   printf("\nEnter matrix elements:\n");

  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < columns; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");

  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < columns; ++j) {
    printf("%d  ", a[i][j]);
    if (j == columns - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < columns; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
 printf("\nTranspose of the matrix:\n");

  for (int i = 0; i < columns; ++i)
  for (int j = 0; j < rows; ++j) {
    printf("%d  ", transpose[i][j]);
    
    if (j == rows - 1)
    printf("\n");
  }
  
  return 0;
}

