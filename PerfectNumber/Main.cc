#include <iostream>

int sum_of_digits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n = n / 10;
  } return sum;
}

int main() {
  int N;
  std::cout << "Enter a positive integer: ";
  std::cin >> N;

  if (N < 1) {
    std::cout << "Input cannot be negative nor 0" << std::endl;
  }
  
  else {
    int count = 0, inc = 0;
    
    while (count < N) {
      inc++;
    
      if (sum_of_digits(inc) == 10) {
        count++;
      }
    }

    std::cout << N << "th perfect number is: " << inc << std::endl;
  }

  return 0;
}