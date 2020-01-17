#include <iostream>
#include <unordered_set>

void SumToK(int arr[], int size, int k) {
  std::unordered_set<int> seen;

  for (int i = 0; i < size; i++) {
    if (seen.find(k - arr[i]) != seen.end()) {
      std::cout << k - arr[i] << " " << arr[i] << std::endl;
      return;
    } else {
      seen.insert(arr[i]);
    }
  }
  std::cout << -1 << std::endl;
}

int main() {
  int arr[] = { 10, 15, 3, 7 };
  int k = 19;

  SumToK(arr, sizeof(arr) / sizeof(*arr), k);
  return 0;
}