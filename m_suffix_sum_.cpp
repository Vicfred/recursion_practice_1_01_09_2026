// Given two numbers N and M, and an array A of N numbers.
// Calculate the sum of the last M numbers.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t suffix_sum(int64_t idx, const vector<int64_t> &A) {
  if (idx == static_cast<int64_t>(A.size())) {
    return 0;
  }

  return A[idx] + suffix_sum(idx + 1, A);
}

int main() {
  int64_t N, M;
  cin >> N >> M;

  vector<int64_t> A(N);

  for (int64_t &a : A) {
    cin >> a;
  }

  cout << suffix_sum(N - M, A) << endl;

  return 0;
}
