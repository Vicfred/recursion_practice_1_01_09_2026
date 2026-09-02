// Length of the Collatz sequence
#include <cstdint>
#include <iostream>

using namespace std;

int64_t collatz(int64_t n) {
  if (n == 1) {
    return 1;
  }

  if (n % 2 == 1) {
    return 1 + collatz(3*n + 1);
  } else {
    return 1 + collatz(n / 2);
  }
}

int main() {
  int64_t n;
  cin >> n;

  cout << collatz(n) << endl;

  return 0;
}
