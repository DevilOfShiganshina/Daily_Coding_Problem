#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string twos_compliment(string binary) {
  for (int i = 0; i < binary.size(); i++) {
    if (binary[i] == '1') {
      binary[i] = '0';
    } else {
      binary[i] = '1';
    }
  }

  for (int i = 0; i < binary.size(); i++) {
    if (binary[i] == '1') {
      binary[i] = '0';
    } else {
      binary[i] = '1';
      break;
    }
  }

  return binary;
}

string dec_to_bin(int value) {
  string binary = "";
  bool flag = false;

  if (value < 0) {
    value = abs(value);
    flag = true;
  }

  while (value) {
    binary += (value % 2 == 0) ? '0' : '1';
    value /= 2;
  }
  
  if (flag == true) {
    binary = twos_compliment(binary);
  } reverse(binary.begin(), binary.end());
  return binary;
}

int count_ones(string binary) {
  int count = 0;

  for (int i = 0; i < binary.size(); i++) {
    if (binary[i] == '1') {
      count++;
    }
  } return count;
}

int next_integer(int value) {
  string binary = "";
  string next_binary = "";

  binary = dec_to_bin(value);
  value++;
  next_binary = dec_to_bin(value);

  while (count_ones(binary) != count_ones(next_binary)) {
    value++;
    next_binary = dec_to_bin(value);
  } return value;
}

int main() {
  int N = 0;

  while (N == 0) {
    cout << "Please enter an integer that is not 0: ";
    cin >> N;
  }
  int next = next_integer(N);
  cout << "Binary of " << N << " is: " << dec_to_bin(N) << endl;
  cout << "Binary of " << next << " is: " << dec_to_bin(next) << endl;
  cout << "Next integer: "<< next << endl;
  return 0;
}