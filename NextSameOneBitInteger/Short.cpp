#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int count_ones(int Decimal) {
  const int bits = sizeof(Decimal) * 8;
  int count = 0;

  for(int i = 0; i < bits; i++) {
    count += ((Decimal >> i) & 1);
  } return count;
}

string dec_to_bin(int Decimal) {
  string binary;
  const int bits = sizeof(Decimal) * 8;

  for (int i = 0; i < bits; i++) {
    binary += ((Decimal >> i) & 1) ? '1' : '0';
  } reverse(binary.begin(), binary.end());
  return binary;
}

int next_integer(int Decimal) {
  int decimal_count = count_ones(Decimal);
  Decimal++;
  while (decimal_count != count_ones(Decimal)) {
    Decimal++;
  } return Decimal;
}

int main() {
  int decimal = 0;
  while (decimal == 0) {
    cout << "Please enter an integer: ";
    cin >> decimal;
  }

  int next = next_integer(decimal);
  cout << "Binary of " << decimal << ": " << dec_to_bin(decimal) << endl;
  cout << "Binary of " << next << ": " << dec_to_bin(next) << endl;
  cout << "The next integer with the same number of 1 bit as " << decimal << " is: " << next << endl;
  return 0;
}