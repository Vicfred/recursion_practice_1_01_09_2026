// Given a number N. Print ⌊log2(N)⌋.
#include <cstdint>
#include <iostream>

using namespace std;

int64_t log_2(int64_t N) {
  if (N == 1) {
    return 0;
  }

  return 1 + log_2(N / 2);
}

int main() {
  int64_t N;
  cin >> N;

  cout << log_2(N) << endl;
  return 0;
}
