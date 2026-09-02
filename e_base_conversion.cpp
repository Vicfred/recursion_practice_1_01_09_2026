// Given a number N. Print the binary equivalent of N.
#include <cstdint>
#include <iostream>

using namespace std;

void binary(int64_t n) {
  if (n < 2) {
    cout << n;
    return;
  }

  binary(n / 2);

  cout << n % 2;
}

int main() {
  int64_t T;
  cin >> T;

  while (T--) {
    int64_t N;
    cin >> N;

    binary(N);
    cout << endl;
  }

  return 0;
}
