#include <iostream>

typedef long long ll;

bool Palindrome(ll val) {
  ll copy = val;
  ll reverse = 0;

  while (copy > 0) {
    reverse = (reverse * 10) + (copy % 10);
    copy /= 10;
  }

  if (reverse == val) return true;
  else return false;
}

int main() {

  ll input;
  std::cout << "Enter an interger: ";
  std::cin >> input;

  if (Palindrome(input)) {
    std::cout << input << " is a palidrome" << std::endl;
  } else {
    std::cout << input << " is not a palindrome" << std::endl;
  }

  return 0;
}