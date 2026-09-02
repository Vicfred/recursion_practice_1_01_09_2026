// Given a number N. Print the digits of N separated by a
// space.
#include <cstdint>
#include <iostream>

using namespace std;

void digits(int64_t n) {
  if (n < 10) {
    cout << n << " ";
    return;
  }

  digits(n / 10);
  cout << n % 10 << " ";
}

int main() {
  int64_t T;
  cin >> T;

  while (T--) {
    int64_t N;
    cin >> N;

    digits(N);
    cout << endl;
  }

  return 0;
}
