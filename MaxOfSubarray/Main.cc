#include <iostream>
#include <algorithm>

void max_of_subarray(int arr[], int size, int k) {
  for (int i = 0; i < (size - k ) + 1; i++) {
    std::cout << *std::max_element(arr+i, arr+i+k) << " ";
  } std::cout << std::endl;
}

int main() {
  int data[] = { 10, 5, 2, 7, 8, 7 };
  int k = 3;
  max_of_subarray(data, sizeof(data) / sizeof(*data), k);
  return 0;
}