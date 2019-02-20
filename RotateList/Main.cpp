#include <algorithm>
#include <iostream>
using namespace std;

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  } cout << endl;
}

void Rotate(int arr[], int size, int k) {
  k %= size;
  int index = size - k;
  reverse(arr, arr + size);
  reverse(arr, arr + index);
  reverse(arr + index, arr + size);
}

int main() {
  int list[] = {1, 2, 3, 4, 5};
  int size = sizeof(list) / sizeof(*list); 
  int k = 3;

  cout << "Original array: ";
  PrintArray(list, size);

  Rotate(list, size, k);

  cout << "Rotated array: ";
  PrintArray(list, size);

  return 0;
}