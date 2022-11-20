#include <iostream>

// Prototype(s)
bool toeplitz(int arr[4][5], int k, int l);

// Driver Program
int main() {
  int matrix[4][5] = {
    {1, 2, 3, 4, 8},
    {5, 1, 2, 3, 4},
    {4, 5, 1, 2, 3},
    {7, 4, 5, 1, 2}
  };

  if (toeplitz(matrix, 4, 5)) {
    std::cout << "Toeplitz Matrix" << std::endl;
  } else {
    std::cout << "Not Toeplitz Matrix" << std::endl;
  }
  return 0;
}

// Definition
bool toeplitz(int arr[4][5], int k, int l) {
  int compare = 0, m = 0, n = 0;
  for (int i = 0; i < k; i++) {
    compare = arr[i][0];
    m = i + 1;
    n = 1;
    while (m < k && n < l) {
      if (compare != arr[m][n]) {
        return false;
      }
      m++;
      n++;
    }
  }

  for (int i = 1; i < l; i++) {
    compare = arr[0][i];
    m = 1;
    n = i + 1;
    while (m < k && n < l) {
      if (compare != arr[m][n]) {
        return false;
      }
      m++;
      n++;
    }
  }
  return true;
}