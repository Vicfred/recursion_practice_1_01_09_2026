// Given two numbers N and R. Print the nCr value.
#include <cstdint>
#include <iostream>

using namespace std;

int64_t choose(int64_t n, int64_t k) {
  if (k == 0 || k == n) {
    return 1;
  }

  return choose(n - 1, k - 1) + choose(n - 1, k);
}

int main() {
  int64_t N, R;
  cin >> N >> R;

  cout << choose(N, R) << endl;
  return 0;
}
