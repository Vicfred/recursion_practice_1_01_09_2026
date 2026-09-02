// Given a number N and an array A of N numbers.
// Print the maximum value in this array.
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t maxn(int64_t idx, const vector<int64_t> &A) {
  if (idx == static_cast<int64_t>(A.size()) - 1) {
    return A[idx];
  }

  int64_t maxima = maxn(idx + 1, A);
  
  if (A[idx] > maxima) {
    return A[idx];
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

  cout << maxn(0, A) << endl;

  return 0;
}
