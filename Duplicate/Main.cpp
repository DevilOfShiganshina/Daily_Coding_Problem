#include <iostream>

int Duplicate(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    if (arr[abs(arr[i])] < 0) {
      return abs(arr[i]);
    } else {
      arr[abs(arr[i])] = -arr[abs(arr[i])];
    }
  }
}

int main() {
  int list[] = { 2, 1, 4, 3, 4, 5 };
  int size = sizeof(list) / sizeof(*list);
  std::cout << "The duplicate element is: " << Duplicate(list, size) << std::endl;
  return 0;
}