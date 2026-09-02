// prefix max
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void maxima(const vector<int64_t> &A, int idx,
            int64_t current) {
  if (idx == static_cast<int64_t>(A.size())) {
    return;
  }

  current = max(A[idx], current);

  cout << current << " ";

  maxima(A, idx + 1, current);
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);
  for (int64_t &a : A) {
    cin >> a;
  }

  maxima(A, 0, numeric_limits<int64_t>::min() / 4);
  cout << endl;

  return 0;
}
