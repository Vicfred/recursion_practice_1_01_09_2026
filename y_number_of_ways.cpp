// Number of ways to reach X using 1, 2 or 3 steps.
#include <cstdint>
#include <iostream>

using namespace std;

int64_t ways(int64_t s, int64_t e) {
  if (s > e) {
    return 0;
  }

  if (s == e) {
    return 1;
  }

  return ways(s + 1, e) + ways(s + 2, e) + ways(s + 3, e);
}

int main() {
  int64_t S, E;
  cin >> S >> E;

  cout << ways(S, E) << endl;
  return 0;
}
