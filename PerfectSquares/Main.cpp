#include <iostream>
#include <cmath>

typedef long long ll;
bool isSquare(ll x, ll root) { return sqrt(x) == root; }

short minNumSquares(ll y) {
  if (y == 1) { return 1; }
  else if (isSquare(y, sqrt(y))) { return 2; }

  return -1;
}

int main() {
  ll N;

  std::cout << "Enter N: ";
  std::cin >> N;
  minNumSquares(N);

  return 0;
}