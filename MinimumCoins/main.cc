/**
 * Author: Tanjid A Shuhag
 * Date: July 11th 2020
 **/

#include <iostream>

typedef long long ll;

ll min_num_coins(ll input);

int main(void) {

  ll n;
  std::cout << "Enter N: ";
  std::cin >> n;

  ll total = 0;
  if (n <= 0) { return 0; }
  else if (n < 5) { total = n; }
  else { total = min_num_coins(n); }

  std::cout << total << std::endl;

  return 0;
}

ll min_num_coins(ll input) {
  ll retval = 0;
  short coins[] = { 25, 10, 5, 1 };

  for (short i = 0; i < 4; i++) {
    ll temp = input / coins[i];
    input = input - (coins[i] * temp);
    retval += temp;
  }

  return retval;
}