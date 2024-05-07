/*
Good morning! Here's your coding interview problem for today.

This problem was asked by Facebook.

Given an array of numbers of length N, find both the minimum and
maximum using less than 2 * (N - 2) comparisons.
*/

#include <iostream>

void foo(int arr[], int size, int &high, int &low) {
  high = INT_MIN, low = INT_MAX;

  int beg = 0, end = size - 1;
  int count = 0;

  for (int i = 0; i < size / 2; i++) {
    count++;
    if (arr[beg] < low) {
      low = arr[beg];
    }
    
    if (arr[beg] > high) {
      high = arr[beg];
    }
    
    if (arr[end] < low) {
      low = arr[end];
    }
    
    if (arr[end] > high) {
      high = arr[end];
    }
    beg++;
    end--;
  }

  std::cout << "Low = " << low << std::endl;
  std::cout << "High = " << high << std::endl;
  std::cout << "count = " << count << std::endl;
  return;
}

int main() {
  int arr[10] = { 50, 60, 70, 80, 90, 10, 20, 30, 40 };
  int size = sizeof(arr) / sizeof(*arr);
  int high = 0, low = 0;

  foo(arr, size, high, low);
  
  return 0;
}