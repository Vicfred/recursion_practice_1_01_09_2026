// Given a number N and an array A of N numbers.
// Print the maximum value in this array.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t maxn(const vector<int64_t> &A) {
  if (static_cast<int64_t>(A.size()) == 1) {
    return A[0];
  }

  vector<int64_t> tail(A.begin() + 1, A.end());

  int64_t maxima = maxn(tail);

  if (A[0] > maxima) {
    return A[0];
  }

  return maxima;
}

int main() {
  int64_t N;
  cin >> N;

  vector<int64_t> A(N);

  for (int64_t &a : A) {
    cin >> a;
  }

  cout << maxn(A) << endl;

  return 0;
}
