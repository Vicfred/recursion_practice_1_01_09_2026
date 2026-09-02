// Given a number N. Print "I love Recursion" N times.
#include <cstdint>
#include <iostream>

using namespace std;

void print(int64_t n) {
  if (n == 0) {
    return;
  }

  cout << "I love Recursion" << endl;
  print(n - 1);
}

int main() {
  int64_t N;
  cin >> N;

  print(N);

  return 0;
}
