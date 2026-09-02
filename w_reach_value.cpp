// Given a number N and operations check if we can reach N
// from 1.
#include <cstdint>
#include <iostream>

using namespace std;

bool canReach(int64_t N, int64_t current) {
  if (current > N) {
    return false;
  }

  if (current == N) {
    return true;
  }

  return canReach(N, current * 10) ||
         canReach(N, current * 20);
}

int main() {
  int64_t T;
  cin >> T;

  while (T--) {
    int64_t N;
    cin >> N;

    if (canReach(N, 1)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
