#include <iostream>

bool toeplitz(int arr[4][5], int arr_i, int arr_j) {
  return true;
}

int main() {
  int matrix[4][5] = {
    {1, 2, 3, 4, 8},
    {5, 1, 2, 3, 4},
    {4, 5, 1, 2, 3},
    {7, 4, 5, 1, 2}
  };

  toeplitz(matrix, 4, 5);
  return 0;
}