// Given a number N. Print a pyramid of height N.
#include <cstdint>
#include <iostream>

using namespace std;

void pyramid(int64_t level, int64_t N) {
  if (level == N) {
    return;
  }

  int64_t stars = 2 * level + 1;
  int64_t spaces = N - level - 1;
  
  for (int64_t i = 0; i < spaces; ++i) {
    cout << " ";
  }

  for (int64_t i = 0; i < stars; ++i) {
    cout << "*";
  }

  cout << endl;

  pyramid(level + 1, N);
}

int main() {
  int64_t N;
  cin >> N;

  pyramid(0, N);

  return 0;
}
