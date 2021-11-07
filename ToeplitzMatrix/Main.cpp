#include <iostream>

bool toeplitz(int arr[4][5], int arr_i, int arr_j) {
  for (int i = 0; i < arr_i; i++) {
    for (int j = 0; j < arr_j; j++) {
      std::cout << arr[i][j] << " ";
    } std::cout << std::endl;
  }
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