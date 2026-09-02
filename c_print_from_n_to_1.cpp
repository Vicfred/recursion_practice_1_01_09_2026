// Given a number N. Print all numbers from N to 1 separated
// by a single space.
#include <cstdint>
#include <iostream>

using namespace std;

void print(int64_t n) {
  if (n == 0) {
    cout << endl;
    return;
  }

  cout << n << " ";

  print(n - 1);
}

int main() {
  int64_t N;
  cin >> N;

  print(N);

  return 0;
}
