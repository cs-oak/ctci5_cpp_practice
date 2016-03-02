#include<iostream>

void swap (int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}

int print_mat (int mat[5][5]) {
 for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++)
   std::cout << mat[i][j] << "  ";
  std::cout << std::endl;
 }
}

int main () {

 int matrix[5][5] = { {1, 2, 3, 4, 5},
                      {0, 2, 4, 6, 8},
                      {1, 3, 5, 7, 9},
                      {1, 4, 7, 0, 3},
                      {2, 5, 8, 1, 4}  };

 std::cout << "Original:" << std::endl;
 print_mat(matrix);

 for (int k = 0; k < 3; k++) { 			//(n-2) for any NxN matrix
  for (int i = k; i < (4-k); i++) {
    swap(&matrix[k][i], &matrix[i][4 - k]); 	//(n-1) - k
    swap(&matrix[k][i], &matrix[4 - k][4 - i]);
    swap(&matrix[k][i], &matrix[4 - i][k]);
  }
 }

 std::cout << "After Rotation:" << std::endl;
 print_mat(matrix);

 return 0;
}
