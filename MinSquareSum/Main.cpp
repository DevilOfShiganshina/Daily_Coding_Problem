#include <iostream>
#include <cmath>

bool is_perfect_square(int value) {
  int root = sqrt(value);
  return (root * root == value);
}

int min_perfect_squares(int value) {
  if (value <= 3) return value;
  else if (is_perfect_square(value)) return 1;
  else if (value % 8 == 7) return 4;

  int root = sqrt(value);
  for (int i = 1; i <= root; i++) {
    if(is_perfect_square(value - i*i)) return 2;
  } return 3;
}

int main() {
  int N = 0;

  while (N <= 0) {
    std::cout << "Please enter an integer greater than 0: ";
    std::cin >> N;
  }

  std::cout << "N: " << N << "\tNum of minimum perfect squares: " << min_perfect_squares(N) << std::endl;

  return 0;
}