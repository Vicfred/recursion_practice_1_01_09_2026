// matrix sum
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

void printSum(const vector<vector<int64_t>> &A,
              const vector<vector<int64_t>> &B, int64_t row,
              int64_t col) {
  int64_t n = static_cast<int64_t>(A.size());
  int64_t m = static_cast<int64_t>(A[0].size());

  if (row == n) {
    return;
  }

  cout << A[row][col] + B[row][col];

  if (col == m - 1) {
    cout << endl;
    printSum(A, B, row + 1, 0);
  } else {
    cout << " ";
    printSum(A, B, row, col + 1);
  }
}

int main() {
  int64_t R, C;
  cin >> R >> C;

  vector<vector<int64_t>> A(R, vector<int64_t>(C));
  vector<vector<int64_t>> B(R, vector<int64_t>(C));

  for (int64_t i = 0; i < R; ++i) {
    for (int64_t j = 0; j < C; ++j) {
      cin >> A[i][j];
    }
  }

  for (int64_t i = 0; i < R; ++i) {
    for (int64_t j = 0; j < C; ++j) {
      cin >> B[i][j];
    }
  }

  printSum(A, B, 0, 0);

  return 0;
}
