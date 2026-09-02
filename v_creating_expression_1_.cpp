// Put '+' or '-' signs between every two numbers in the
// array A in order to make an
// expression that is equal to X.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

bool canReach(const vector<int64_t> &A, int64_t idx,
              int64_t target) {
  if (idx == static_cast<int64_t>(A.size())) {
    return target == 0;
  }

  return canReach(A, idx + 1, target - A[idx]) ||
         canReach(A, idx + 1, target + A[idx]);
}

int main() {
  int64_t N, X;
  cin >> N >> X;

  vector<int64_t> A(N);

  for (int64_t &a : A) {
    cin >> a;
  }

  if (canReach(A, 1, X - A[0])) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
