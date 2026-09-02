// maximum path-sum
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int64_t pathSum(const vector<vector<int64_t>> &A, int64_t i,
                int64_t j) {
  const int64_t MINF = numeric_limits<int64_t>::min() / 4;
  if (i < 0 || j < 0) {
    return MINF;
  }

  if (i == 0 and j == 0) {
    return A[0][0];
  }

  int64_t up = pathSum(A, i - 1, j);
  int64_t left = pathSum(A, i, j - 1);

  return A[i][j] + max(up, left);
}

int main() {
  int64_t N, M;
  cin >> N >> M;

  vector<vector<int64_t>> A(N, vector<int64_t>(M));
  for (int64_t i = 0; i < N; ++i) {
    for (int64_t j = 0; j < M; ++j) {
      cin >> A[i][j];
    }
  }

  cout << pathSum(A, N - 1, M - 1) << endl;

  return 0;
}
