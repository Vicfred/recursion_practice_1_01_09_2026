// Given a number N. Print numbers from 1 to N in separate
// lines.
#include <cstdint>
#include <iostream>

using namespace std;

void print(int64_t n) {
  if (n == 0) {
    return;
  }

  print(n - 1);

  cout << n << endl;
}

int main() {
  int64_t N;
  cin >> N;

  print(N);

  return 0;
}
